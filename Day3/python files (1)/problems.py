arr = list(input().split())

big = []
small = []

for c in arr:
    if ord(c) >= 97:
        small.append(c)
    else:
        big.append(c)

print(f'big=', end = '')
print(*big, end='')
print()
print(f'small=', end = '')
print(*small, end='')