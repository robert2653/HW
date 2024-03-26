import pygsheets
import requests
import json
import os
from dotenv import load_dotenv
from tqdm import tqdm
import time

load_dotenv()

# excel
week = 'G' # 這週在 excel 上的 col
survey_url = 'https://docs.google.com/spreadsheets/d/1GwaWkhfv8q_Qeks4QQyzdrXX6icnKxemNpl1dV6a_AU/edit#gid=856451132' # 表單連結
grade = {
    'A' : 40,
    'B' : 20,
    'C' : 20,
    'D' : 20
 }


# Domjudge
username = os.getenv("ADMINUSERNAME")
password = os.getenv("ADMINPASSWORD")
resubmit_team_id = os.getenv("RESUBMITTEAMID")
cid = "HW05"
api_url = f'https://pgds.csie.io/api/v4/contests/{cid}/judgements'


# 獲取 學號對應欄位，學好 col 在第一欄
def get_stuid(ws, sh):
    table = {}
    column_a_data = ws.get_col(1, include_tailing_empty=False)
    for index, value in enumerate(column_a_data, start=1):
        table[value] = index
    return table

def get_cid_submit():
    table = {}
    response = requests.get(api_url, auth=(username, password))
    json_data = json.loads(response.text)
    for i in json_data:
        table[i['submission_id']] = i['judgement_type_id']
    return table

def get_resummit_submit(AC_SET : dict):
    get_resubmit_api = f"https://pgds.csie.io/api/v4/contests/{cid}/submissions"
    response = requests.get(get_resubmit_api, auth=(username, password))
    json_data = json.loads(response.text)
    table = []
    for i in json_data:
        if i['team_id'] == resubmit_team_id:
            if AC_SET[i['id']] == 'AC':
                table.append(i['id'])
    return table

def get_problem_and_student(id : str):
    api = f"https://pgds.csie.io/api/v4/contests/{cid}/submissions/{id}/source-code"
    response = requests.get(api, auth=(username, password))
    json_data = json.loads(response.text)
    return {'problem' : json_data[0]['filename'][10], 'userid': json_data[0]['filename'][:9]}

def main():
    gc = pygsheets.authorize(service_account_file='token.json') # 從 token 獲取權限
    sh = gc.open_by_url(survey_url) # 打開表單
    ws = sh.worksheet_by_title('作業')
    
    excel_id = get_stuid(ws, sh)
    
    ac_table = get_resummit_submit(get_cid_submit())

    all_grade = {}
    
    for i in tqdm(range(len(ac_table))):
        data = get_problem_and_student(ac_table[i])
        userid = data['userid']
        problem = data['problem']
        if userid not in all_grade:
            all_grade[userid] = {
                "score" : 0,
                "problem_set" : []
            }
        if problem not in all_grade[userid]['problem_set']:
            all_grade[userid]['problem_set'].append(problem)
            all_grade[userid]['score'] += grade[problem]
        
        
    
    for i, info in tqdm(all_grade.items()):
        if i not in excel_id:
            continue
        # print(i, info)
        excel_user_id = excel_id[i]
        index = f'{week}{excel_user_id}'
        val = str(info['score'])
        old_val = ws.get_value(index)
        if val != old_val:
            print(i, info)
        ws.update_value(index, val)
        time.sleep(1)
        
if __name__ == "__main__":
    main()