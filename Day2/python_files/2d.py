# 이중 for문

# 2X3 행렬을 출력하세요.

###
###

# for i in range(2):
#     for j in range(3):
#         print('#', end='')
#     print()

# [도전] 2X5 행렬을 출력하세요
# for i in range(2):
#     for j in range(5):
#         print(j, end='')
#     print()

# [도전] 3X3 행렬
# 123
# 456
# 789

# val = 1
# for i in range(3):
#     for j in range(3):
#         print(val, end='')
#         val += 1
#     print()

# 2차원 리스트 + 2중 for문

# 반복문 + 조건문 같이 쓰는 연습

# arr = [1,4,4,7,7,7,7,2,7]
# cnt = 0
# for i in arr:
#     if i == 7:
#         cnt += 1
# print(cnt)

# list comprehension
# 1차원 배열을 하드코딩 하세요.
# value가 0이고, 5개의 요소로 이루어진 1차원 배열

# arr1 = [0] * 5 # 1차원 리스트에만 사용
# arr2 = [0 for _ in range(5)] # list comprehension: 2차원 리스트에 사용
# print(arr1)
# print(arr2)

# [도전] 
# width = 4
# height = 2
# arr = [[0 for _ in range(width)] for _ in range(height)]
# print(arr)

# for i in range(height):
#     for j in range(width):
#         arr[i][j] = 7
# print(arr)

# rows = 3
# cols = 5
# #####
# #####
# #####
# arr = [[0 for _ in range(cols)] for _ in range(rows)]
# v = 0
# for i in range(rows):
#     for j in range(cols):
#         arr[i][j] = v
#         v += 1
# print(arr)

