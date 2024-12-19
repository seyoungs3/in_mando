# # if

# # 실무에서 실제 if문 하나만 쓸 때
# # return을 쓴다
# a = int(input())
# def kfc():
#     if a % 2 == 0:
#         print('나누어 떨어짐')
#         return
#     print('나누어 떨어지지 않음')

# # if-if 구조는 권장되지 않음
# # if-else 구조가 가독성이 좋음

# # [도전] 점수 평가

# a = int(input())

# if a >= 95:
#     print('A+')
# elif a >= 90:
#     print('A')
# elif a >= 85:
#     print('B+')
# elif a >= 80:
#     print('B')
# elif a >= 75:
#     print('C+')
# elif a >= 70:
#     print('C')
# else:
#     print('D')

# # [도전] 윤년

# year = int(input())

# if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
#     print('윤년')
# else:
#     print('윤년x')

# while

# [도전] i를 1부터 10까지 10번 반복, 1부터 10까지 출력

# i = 1
# while i <= 10:
#     print(i)
#     i += 1


# arr = [1,2,3,4,5]
# for i in range(5):
#     arr[i]

# for a in arr:
#     print(a)

# # break와 continue
# str_num = '12345'

# for i in str_num:
#     if i == '3':
#         break # 탈출, 출력 결과: 1 2
#     print(i)

# for i in str_num:
#     if i == '3':
#         continue # 반복문 처음으로 돌아감, 출력 결과: 1 2 4 5
#     print(i)

# for i in range(5):
#     if i == 2:
#         continue
#     if i == 4:
#         break
#     print(i) # 출력 결과: 0 1 3