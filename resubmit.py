import requests
import json
import base64
from tqdm import tqdm
from datetime import datetime
import os
import zipfile
from dotenv import load_dotenv

load_dotenv()

folder_path = 'week04/A' # week01/A
problem_id = "GCD" # two_num_add
contest_id = "HW04" # HW01
judge_url = "pgds.csie.io" # pgds.csie.io
 
username = os.getenv("APIUSERNAME")
password = os.getenv("APIPASSWORD")
language_id = "c"
url = f'https://{judge_url}/api/v4/contests/{contest_id}/submissions'

# 決定是否檔案要上傳的條件，此為第五週檢查中括號
def judge(filepath):
    with open(filepath, 'r', encoding='utf-8') as f:
        while True:
            try:
                char = f.read(1)  # 每次讀取一個字符
                if not char:
                    break  # 如果沒有更多的字符可以讀取，跳出循環
                if char == '[' or char == ']':
                    with open(folder_path + "/nosumission.txt", 'a') as a:
                        a.write(filepath + '\n')
                    return False
            except Exception as e:
                print(e, filepath)
      
    return True

def zip_submit_file():
    for filename in tqdm(os.listdir(folder_path)):
        if filename.endswith('.c'):
            # 構建每個 .c 檔案的完整路徑
            file_path = os.path.join(folder_path, filename)
            
            # 僅限給第五週檢查中括號用
            if judge(file_path) == False: continue
            
            # 創建與 .c 檔案同名的 zip 檔案路徑
            zipfilename = filename[:-2]
            zip_file_path = os.path.join(folder_path, zipfilename + '.zip')
            
            # 創建 ZipFile 物件並添加 .c 檔案
            with zipfile.ZipFile(zip_file_path, 'w') as zipf:
                zipf.write(file_path, arcname=filename)

def delete_all_zip():
    for filename in tqdm(os.listdir(folder_path)):
        if filename.endswith('.zip'):
            # 構建每個 .zip 檔案的完整路徑
            file_path = os.path.join(folder_path, filename)
            # 刪除 .zip 檔案
            os.remove(file_path)
            print(f"Deleted: {filename}")
            
def get_zip_file_path():
    table = []
    for filename in tqdm(os.listdir(folder_path)):
        if filename.endswith('.zip'):
            table.append(filename)
    return table

def main():
    zip_submit_file()
    table = get_zip_file_path()
    for zipfilepath in table:
        with open(folder_path + '/' + zipfilepath, 'rb') as zip_file:
            zip_content = zip_file.read()
        
        data = {
            "problem_id": problem_id,
            "language_id": language_id,
            "time": str(datetime.now()),
            "files": [
                {
                    "data" : base64.b64encode(zip_content).decode('utf-8')
                }
            ]
        }


        json_data = json.dumps(data)


        response = requests.post(url, data=json_data, headers={'Content-Type': 'application/json'}, auth=(username, password))


        print(response.status_code)  
        print(response.text)         
    delete_all_zip()
    
if __name__ == "__main__":
    main()