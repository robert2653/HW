import os
import zipfile
import shutil
import re
from tqdm import tqdm
correct_c_file = r'\d{9}_[A-Z]\.c'

def clean(dirname): # dirname = weekXX
    for dir in os.listdir(dirname):
        if dir == "error_log.txt" or dir == "wrong_format":
            continue
        if not (len(dir) == 1 and os.path.isdir(os.getcwd() + "/" + dirname + "/" + dir)):
            try:
                os.remove(dirname + "/" + dir)
            except:
                shutil.rmtree(dirname + "/" + dir)

def traverse_folder(folder_path, dirname):
    # 獲取資料夾中的所有檔案和子目錄
    for item in os.listdir(folder_path):
        try:
        # 構建完整的路徑
            item_path = os.path.join(folder_path, item)
            if os.path.isfile(item_path):
            # 如果是檔案，列印檔案名稱
                if re.match(correct_c_file, item) and len(item) == 13:
                    if os.listdir(dirname).count(item[10]) == 0:
                        os.mkdir(dirname + "/" + item[10])
                    shutil.move(item_path, os.path.join(os.getcwd() + "/" + dirname + "/", item[10]))
            
            elif os.path.isdir(item_path):
                # 如果是目錄，列印目錄名稱，並遞迴處理目錄
                traverse_folder(item_path, dirname)
            # 指定資料夾路徑
        except Exception as e:
            # Log the error message to error_log.txt
            with open(dirname + "/" + 'error_log.txt', 'a') as log_file:
                log_file.write(item_path +'' + str(e) + '\n')

def unzip_student(filename, dirname):
    try:
        zip = zipfile.ZipFile(filename)
    except Exception as e:
        # Log the error message to error_log.txt
        with open(dirname + "/" + 'error_log.txt', 'a') as log_file:
            log_file.write(filename + ' ' + str(e) + '\n')
        return False
    zip.extractall(dirname)
        
def unzip_ecourse(filename, dirname): # dirname = weekXX
    # print(filename, dirname)
    assert (zipfile.is_zipfile(filename))
    zip = zipfile.ZipFile(filename)
    for name in tqdm(zip.namelist()):
        if name.find("_assignsubmission_file") != -1:   # 同學會有 2 個檔案，這個才是他的 zip
            zip.extract(name, dirname) # 解壓縮到 weekXX，會是 [學號 名字_亂碼.zip]
            unzip_student(dirname + "/" + name, dirname) # 如果這個 zip 沒有包含符合格式的檔案

    traverse_folder(os.getcwd() + "/" + dirname, dirname) # 遍歷 weekXX

if __name__ == "__main__":
    # 把 Ecourse 的 zip 檔載下來，命名成 weekXX...，前六個字要對就好
    files = os.listdir()
    for file in files:  # 遍歷當前資料夾底下所有檔案
        if file.endswith(".zip"): # 後綴是 zip
            dirname = file[0:6] # dirname = weekXX
            if os.listdir().count(dirname) == 0:   # 如果沒有 weekXX
                os.mkdir(dirname) # 建 weekXX
            unzip_ecourse(file, dirname)  # unzip
            clean(dirname) # 刪掉不要的東西
