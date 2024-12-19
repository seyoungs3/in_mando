# 함수명
# 다 대문자 혹은 다 소문자로 만들기

# 지역변수
# 함수 안에 만들어지는 변수
# 함수 밖에서 사용할 수 없다

# 전역변수
# 함수 안에서 읽을 수만 있음
# 함수 안에서 수정할 수 없다 -> global로 수정 가능
# ***함수 내에서 전역변수를 수정하고 싶을 때 global을 붙인당***

# [도전] 함수 사용하기
a, b = 0, 0 # 초기화를 꼭 하세요우
def input_num():
    global a, b
    a, b = map(int, input().split())

def output_num():
    for i in range(a, b+1):
        print(i, end=' ')

input_num()
output_num()