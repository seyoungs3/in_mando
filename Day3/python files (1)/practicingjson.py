# json
# 1 ***json의 key는 반드시 문자열***
# 2 문자열은 반드시 큰따옴표

# 데이터 분석, 소프트웨어 엔지니어링에 사용

# 객체(==딕셔너리)는 중괄호
# 배열은 대괄호
# 주석 사용 불가
# 마지막 항목 뒤에 콤마 사용 불가


# [도전1]

# {
#     "group": "BTS",
#     "name": [
#         "aaa",
#         "bbb",
#         "ccc",
#         "ddd"
#     ],
#     "age": [
#         35,
#         "Unknown",
#         56,
#         55
#     ]
# }


# [도전2]

# {
#   "love": [
#         "chayoon",
#         "jihyo"
#     ],
# "2": [
#         "computer",
#         "notebook",
#         "mouse"
#     ],
    
#     "dislike": [
#         "hungry",
#         777
#     ]
# }

# [도전3]

# [
#     [
#         1,
#         2,
#         3
#     ],
#     [
#         3,
#         4,
#         5
#     ],
#     {
#         "A": 3,
#         "B": 6,
#         "OK": false
#     },
#     true
# ]



# 인코딩과 디코딩
# 파이썬 딕셔너리-> JSON : 인코딩
# JSON -> 파이썬 : 디코딩

'''

import json

a = dict()
a['name'] = 'sanghi'
a['price'] = 4900
a['brand'] = 'mcdonald'

b = json.dumps(a, indent=4) # 인덴트: 들여쓰기 4칸 == tab(포맷팅)
print(b) # b는 json -> 인코딩 과정

c = json.loads(b)
print(c) # c는 딕셔너리 -> 디코딩 과정
'''

# 파이써닉하지 않은 코드입니다륑
# f1 = open('mc.json', 'r') # read
# f2 = open('output.txt', 'w') # write

# txt = f1.read()
# f2.write(txt)
# print(txt)

# f2.close()
# f1.close()

# 파이써닉한 코드입니다륑
# txt = ''
# with open('mc.json', 'r') as f1: # as는 별칭
#     txt = f1.read() # 읽은 걸 txt에 할당

# with open('output.txt', 'w') as f2:
#     f2.write(txt) # f2에 txt를 쓰기

# [도전]

# import json

# txt = ''
# with open('mc.json','r') as f1:
#     txt = f1.read()

# di = json.loads(txt)

# with open('output.txt', 'w') as f2:
#     f2.write(' '.join(str(x) for x in di['widget']['window'].keys())+'\n')
#     f2.write(' '.join(str(x) for x in di['widget']['image'].values())+'\n')
#     f2.write(' '.join(str(x) for x in di['widget']['text'].items())+'\n')

# print(di['widget']['window'].keys()) 



# import json
# import requests

# url = 'http://api.tvmaze.com/singlesearch/shows?q=narcos&embed=episodes'
# r = requests.get(url) # 응답 받은 걸 r에 할당
# # .text -> json 객체
# print(r.text) # r을 프린트, 문자열 형태로 반환


