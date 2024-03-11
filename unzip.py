import os
import zipfile
import shutil
import re
from tqdm import tqdm
correct_c_file = r'\d{9}_[A-Z]\.c'

def clean(dirname): # dirname = weekXX，把 weekXX 內不是題目資料夾的東西刪光光
    for dir in os.listdir(dirname):
        if dir == "error_log.txt" or dir == "wrong_format":
            continue
        if not (len(dir) == 1 and re.match(r'[A-Z]', dir) and os.path.isdir(os.getcwd() + "/" + dirname + "/" + dir)):
            try:
                os.remove(dirname + "/" + dir)
            except:
                shutil.rmtree(dirname + "/" + dir)

def traverse_folder(folder_path, dirname): # folder_path 遍歷時當前資料夾的絕對路徑，dirname = weekXX
    for item in os.listdir(folder_path): # 獲取資料夾中的所有檔案和資料夾
        try:
            item_path = os.path.join(folder_path, item) # 建構 item 的絕對路徑
            if os.path.isfile(item_path): # 如果 item 是檔案
                if re.match(correct_c_file, item) and len(item) == 13: # 如果 item 是正確格式的 .c 檔
                    if os.listdir(dirname).count(item[10]) == 0: # 如果不存在題目資料夾
                        os.mkdir(dirname + "/" + item[10]) # 建一個題目資料夾在 weekXX
                    shutil.move(item_path, os.path.join(os.getcwd() + "/" + dirname + "/", item[10])) # 移動 item 到題目資料夾內
            
            elif os.path.isdir(item_path): # 如果 item 是資料夾
                traverse_folder(item_path, dirname) # dfs

        except Exception as e: # 通常是捕捉到重複提交，導致移動檔案時錯誤
            # Log the error message to error_log.txt
            with open(dirname + "/" + "error_log.txt", "a", encoding = "UTF-8") as log_file:
                log_file.write(item_path + " " + str(e) + "\n")

def unzip_student(filename, dirname): # dirname = weekXX
    try:
        zip = zipfile.ZipFile(filename) # 7z 之類的東東會在這裡被判掉
    except Exception as e:
        # Log the error message to error_log.txt
        with open(dirname + "/" + 'error_log.txt', 'a', encoding = "UTF-8") as log_file:
            log_file.write(filename + ' ' + str(e) + '\n')
        return False
    zip.extractall(dirname) # 把所有東西解壓縮
        
def unzip_ecourse(filename, dirname): # dirname = weekXX
    # print(filename, dirname)
    assert (zipfile.is_zipfile(filename))
    zip = zipfile.ZipFile(filename)
    for name in tqdm(zip.namelist()):
        if name.find("_assignsubmission_file") != -1:   # 同學會有 2 個檔案，這個才是他的 zip
            zip.extract(name, dirname) # 解壓縮到 weekXX，會是 [學號 名字_亂碼.zip]
            unzip_student(dirname + "/" + name, dirname) # 執行解壓縮

    traverse_folder(os.getcwd() + "/" + dirname, dirname) # 遍歷 weekXX，把所有符合格式的 .c 檔都移動到對應的題目資料夾

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
