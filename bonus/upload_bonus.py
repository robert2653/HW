import pygsheets
import requests
import json
import os
from dotenv import load_dotenv
from tqdm import tqdm
import time

load_dotenv()

# excel
week = 'H' # 這週在 excel 上的 col
survey_url = 'https://docs.google.com/spreadsheets/d/1GwaWkhfv8q_Qeks4QQyzdrXX6icnKxemNpl1dV6a_AU/edit#gid=1484966969' # 表單連結

# text
bonus_txt = "bonus6.txt"

# bonus rule
grade = "0.5"


# 獲取 學號對應欄位，學好 col 在第一欄
def get_stuid(ws, sh):
    table = {}
    column_a_data = ws.get_col(1, include_tailing_empty=False)
    for index, value in enumerate(column_a_data, start=1):
        table[value] = index
    return table




def main():
    gc = pygsheets.authorize(service_account_file='../token.json') # 從 token 獲取權限
    sh = gc.open_by_url(survey_url) # 打開表單
    ws = sh.worksheet_by_title('加分')
    excel_id = get_stuid(ws, sh)
    
    
    with open(bonus_txt, "r") as f:
        bonuses = f.readlines()
    
    for bonus in tqdm(bonuses):
        inform_list = bonus.strip().split()
        if len(inform_list) < 3:
            continue
        # print(inform_list[1])
        if inform_list[1] not in excel_id:
            continue
        excel_user_id = excel_id[inform_list[1]]
        index = f'{week}{excel_user_id}'
        ws.update_value(index, grade)
        time.sleep(1)
        
main()