a, b = map(int, input().split())
a, b = a if a != 1 else 14, b if b != 1 else 14

if a > b:
    print('Alice')
elif a < b:
    print('Bob')
else:
    print('Draw')
