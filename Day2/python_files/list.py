# 리스트
# a = [1,2,3,5,8]
# a에는 []라는 리스트가 할당 된 것, 안에 담긴 값이 할당된 게 아님

# 리스트는 가변형(변형가능) 시퀀스(순서 있음)

# # [도전] 할당 횟수
# a = []
# a = [1,1,1]
# a.append(1)
# a = [2,2,2,6]
# a.append(5)
# print(a) # [2,2,2,6,5] , 할당 횟수는 3회

# [도전] 리스트 순회하기
# a = [1,5,2,7,3,6]

# print(a[0], a[-1])

# print(a[0:6:2])

# for i in a:
#     if 3 <= i <= 6: print(i)

# 리스트 초기화 방법
# 파이써닉한 코드로 설계
# arr = [0] * 6 # 성능이 좋고 간결함

# [도전] 리스트 값 채우기
# a = [0] * 5
# x = 5
# for i in range(5):
#     a[i] = x
#     x += 1

# for i in a: print(i, end = ' ') # print(*a)도 같은 동작

# # 전체 합계를 for문 순회로 구현하기
# arr = [1,5,3,4,4,2]
# total_sum = 0
# for num in arr:
#     total_sum += num
# print(total_sum)  # print(sum(arr))

