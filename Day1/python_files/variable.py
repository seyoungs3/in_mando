# 변수는 값을 나타내는 이름
# 변수 할당: 변수에 값을 지정할 때 "할당" 이라고 함, 저장이 아님!

# PI = 3.14
# PI = '삼점일사'

# print(PI)

# import math
# print(math.pi)

# 변수명 규칙
# 영문 알파벳, 언더스코어, 숫자
# 대시 사용 불가
# 숫자로 시작 불가

# 변수 출력하기

# a = 10
# print(a)

# a = 20
# print(str(a) + '값이 저장되었습니다') # 권장하지 않음

# # f-string을 권장

# print(f'{a} 값이 저장되었습니다')

# name = '천세영'
# age = '24'
# area = '마포'

# print(f'저는 {name}이고, {age}세이고, {area}에서 살고 있습니다.')

# # 소수점 서식
# # f{variable:.3f}

# PI = 3.141592
# print(f'{PI:.3f}')

# # [도전] 연산 후 출력하기
# a = 10.25
# b = 20.31
# sum_v = a + b
# print(f'a와 b를 합치면 {sum_v:.1f}이 됩니다.')

# a = 10
# print(id(a)) # id는 메모리 주소 메소드
# a = 50
# print(id(a)) # 재할당 시 메모리 주소가 바뀜

# a = 2 + 3j
# a = None
# print(type(a))

# print(int('3'))
# print(int('3.14')) # Error, 왜인지는 모르겠딩
# print(int(3.5))
# print(float('3.14'))

# print(str(1) + '순위')

# [도전] 데이터 타입 알아보기
a = 10
b = 3.14
c = '안녕'
d = 2+3j
e = None
print(type(a), type(b), type(c), type(d), type(e))