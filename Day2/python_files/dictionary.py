# dictionary 사용 이유
# 리스트는 문자열과 음수를 index로 사용할 수 없기 때문에

# dictionary 생성 두 가지 방법

# 1 
# a = dict() # a = {} : 잘못된 방법
# a['HI'] = 55 # HI는 key, 55는 value
# a['BBQ'] = 'KFC'
# print(a)

# 2
# a = {'HI' : 55, 'BBQ' : 'KFC'} # *딕셔너리는 순서가 없음 -> 가변형 비시퀀스

# 그렇다면 dictionary는 for문으로 어떻게 순회할까?
# ****key를 기준으로 순회한다!

# for key in a:
#     print(key)

# lst = ['MC', 'BTS', 'BTS', 'MC', 'BTS']

# di = dict()
# for i in lst:
#     di[i] = 0 # 초기화, di = {MC:0, BTS:0}

# for i in lst:
#     di[i] += 1 # 개수 세기 {MC:2, BTS:3}

# # print(di)

# max_cnt = 0
# result = ''
# for word, cnt in di.items():
#     if cnt > max_cnt:
#         max_cnt = cnt
#         result = word
# print(max_cnt)
# print(result)

# [도전] 문자열을 입력 받고 배열안에 몇개 존재하는지 출력
# lst = ['ABE', 53, -99, -99, 124]
# di = dict()

# for w in lst:
#     di[str(w)] = 0 # int 입력이 있으므로 str 변환

# for i in lst:
#     di[str(i)] += 1

# sentence = input()
# print(di[sentence])
# print(di.get(sentence)) # ***딕셔너리에 생성되지 않은 key값을 읽으려고 하면 error

# for i in lst:
#     if (i not in di) : di[i] = 0
#     di[i] += 1 # else  ***이렇게 바꿔 쓰면 해결 가능


# [도전] Dictionary 연습하기
# d = dict()
# d = {'KFC' : 10, 'MC' : 20, 'MOMS' : 30}

# input_v = input()
# if input_v in d:
#     print(d[input_v])
# else:
#     print(1000)

# key로 순회하기 * 이게 기본임니당당다리
# for key in di:
#     print(key)

# # value로 순회하기
# for value in di.values():
#     print(value)

# # items(key와 value로 순회)
# for key, value in di.items():
#     print(f'{key} : {value}')

# [도전] Dictionary 연습하기
# 1번 해답
# lst = ['MC', 'BTS', 'BTS', 'MC', 'BTS']

# di = dict()
# for word in lst:
#     di[word] = 0

# for word in lst:
#     di[word] += 1

# for key, value in di.items():
#     print(f'{key}:{value}개')

# # 2번 해답
# lst = ['MC', 'BTS', 'BTS', 'MC', 'BTS']

# di = dict()
# for word in lst:
#     if word not in di: di[word] = 0
#     di[word] += 1
# print(f'MC: {di['MC']}개')
# print(f'BTS: {di['BTS']}개')

# n, m = map(int, input().split())
# arr = list(map(int, input().split()))
# findarr = list(map(int, input().split()))

# di = dict()
# for num in arr:
#     if num not in di: di[num] = 0
#     di[num] += 1

# for find in findarr:
#     if find in di:
#         print(di[find], end = ' ')
#     else:
#         print(0, end = ' ')

n, m = map(int, input().split())
lst = list(map(int, input().split()))
di = dict()
for num in lst:
    if num not in di: di[num] = 0 # 없으면 추가하고
    di[num] += 1 # 갯수 1증가

for _ in range(m):
    find = int(input())
    if find in di:
        print(di[find])
    else:
        print(0)
