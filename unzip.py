import os
import zipfile
import shutil
import re
total_submit = 0
success_submit = 0
pattern = pattern = r'\d{9}_[A-Z]\.c'
def clean(dirname): # dirname = weekXX
    for dir in os.listdir(dirname):
        if dir == "error_log.txt":
            continue
        if len(dir) != 1:   # 不是長度為 1 的資料夾的話，要刪掉
            shutil.rmtree(dirname + "/" + dir)

def unzip_student(filename, dirname):
    try:
        zip = zipfile.ZipFile(filename)
    except Exception as e:
        # Log the error message to error_log.txt
        with open(dirname + "/" + 'error_log.txt', 'a') as log_file:
            log_file.write(filename + ' ' + str(e) + '\n')
        return

    for name in zip.namelist(): 
        if len(name) == 13 and re.match(pattern, name):
            print(name)
            if os.listdir(dirname).count(name[10]) == 0:    # 開 A、B、C 資料夾在 weekXX
                os.mkdir(dirname + "/" + name[10])
            zip.extract(name, dirname + "/" + name[10]) # 在 A、B、C 解壓縮
        

def unzip_ecourse(filename, dirname): # dirname = weekXX
    # print(filename, dirname)
    assert (zipfile.is_zipfile(filename))
    zip = zipfile.ZipFile(filename)
    for name in zip.namelist():
        if name.find("_assignsubmission_file") != -1:   # 同學會有 2 個檔案，這個才是他的 zip
            zip.extract(name, dirname) # 解壓縮到 weekXX，會是 [學號 名字_亂碼.zip]
            unzip_student(dirname + "/" + name, dirname)

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