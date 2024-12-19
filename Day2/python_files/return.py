# [도전] 두 정수의 합을 계산하는 함수를 정의하고 호출해 보세요. (return 함수)

# def 함수명(매개변수==parameter):
#     code
#     return 반환값

# 함수명(함수인자==argument)



def SUM(x, y):
    vsum = x + y
    return vsum

a, b = map(int, input().split())
v = SUM(a, b)
print(v)