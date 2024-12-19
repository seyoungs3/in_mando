# 클래스
# OOP

# def __init__(self): -> 이건 바꾸면 안됨
# 클래스명은 앞 글자를 대문자로 한당
# __init__(self) : 생성자 함수, 변수 초기화 용도
# 생성자 함수 내에 변수를 필드라고 함, 클래스 안에서 사용할 변수임
# 메서드: 클래스 안에서 만든 함수 ex) .append()

# 클래스를 호출하는 법
# 변수에 클래스를 호출 ex) sanghai = SetMenu()



# class SetMenu:
#     def __init__(self):
#         self.potato = 100
#         self.hambug = 200

#     def eat(self):
#         print('포테이토 맛있다')
#         print(f'음 {self.hambug + self.potato} 만큼 맛있다!')


# sanghai = SetMenu() # sanghai는 클래스, 인스턴스(SetMenu()를 위한 메모리 공간)가 생성되었음 -> 인스턴스에 생성자가 들어감
                      # 그리고 인스턴스를 할당함
# sanghai.eat() # 클래스의 메서드 이용


# # [도전] 저글링 클래스 만들기
# class Zergling : 
#     def __init__(self):
#         self.hp = 20
#         self.mana = 50

#     def run(self):
#         print('뛴다')
#         self.hp -= 1
#         self.mana += 1

#     def show_status(self):
#         print(self.hp, self.mana)

# # [도전] 저글링 클래스를 사용하는 코드 작성하기

# z1 = Zergling()
# z2 = Zergling()

# z1.run()
# z1.show_status()
# print()

# for _ in range(5):
#     z2.run()
# z2.show_status()


# ****[도전] GameMachine Class 제작**** 매개변수가 있어서 헷갈렸음

# class GameMachine:
#     def __init__(self):
#         self.coins = 0

#     def input_coin(self, amount): # ***매개변수가 있을 때
#         if amount > 5:
#             print("error: 5 초과")
#             return
#         elif self.coins + amount > 10:
#             print("error: 10 초과")
#             return
#         self.coins += amount 

#     def play_game(self):
#         if self.coins < 1:
#             print('코인을 넣어주세요')
#             return
#         self.coins -= 1
#         print('게임 재밌다')

#     def show_status(self):
#         print(f'남아있는 코인은 {self.coins} 입니다')

# gm = GameMachine()
# gm.input_coin(2)
# gm.show_status()
# gm.play_game()
# gm.show_status()


# 파이썬에서는 수, 문자열, 리스트, 클래스, 함수 들을 할당할 수 있음
# 이러한 인스턴스를 객체라고 함
# 객체들은 변수에 할당한 뒤, 변수를 이용하여 객체를 제어함

# 상속에서 할 수 있는 것 2가지
# 1 메서드를 추가 (부모 클래스의 메서드를 받으니까)
# 2 메서드를 교체 (==overriding)

# 오버라이딩
# == 재정의한다, 부모의 메서드를 자식이 변경하는 것


# [도전] 상속 구현하기

class TireParent:
    def run(self):
        print('런')
    
class TireChild1(TireParent): # 클래스명1(클래스명2) : 클래스1이 클래스2를 상속받음
    def ran(self):
        print('랜')

class TireChild2(TireParent):
    def run(self):
        print('런런')
    def ron(self):
        print('론')

t = TireChild1()
t.ran()
t = TireChild2()  # 변수에 클래스를 할당할 때는 항상 클래스명() -> **괄호를 붙인다!**
t.run()

