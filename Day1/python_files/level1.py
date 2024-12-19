x = 5

def KFC1():
    print(x)

def KFC2():
    global x
    print(x)
    x = 100

KFC2()
KFC1()