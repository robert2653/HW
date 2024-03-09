import requests
import json
import base64
from tqdm import tqdm
from datetime import datetime
import os
import zipfile

folder_path = 'week02/B'
contest_id = "HW02"
username = "as6325400"
password = "1234567890"
problem_id = "chrismas_tree"
language_id = "c"
url = f'https://pgds.csie.io/api/v4/contests/{contest_id}/submissions'

def zip_submit_file():
    for filename in tqdm(os.listdir(folder_path)):
        if filename.endswith('.c'):
            # 構建每個 .c 檔案的完整路徑
            file_path = os.path.join(folder_path, filename)
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

def main():
            
    zip_file_path = 'test.zip'
    with open(zip_file_path, 'rb') as zip_file:
        zip_content = zip_file.read()
        
    data = {
        "problem_id": problem_id,
        "language_id": language_id,
        "time": str(datetime.now()),
        "files": [
            {
                
            }
        ]
    }


    json_data = json.dumps(data)


    response = requests.post(url, data=json_data, headers={'Content-Type': 'application/json'}, auth=(username, password))


    print(response.status_code)  
    print(response.text)         
