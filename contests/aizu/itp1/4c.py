while True:
    s = input().split()
    a, op, b = int(s[0]), s[1], int(s[2])

    if op == '?':
        break

    print(
        a + b if op == '+' else
        a - b if op == '-' else
        a * b if op == '*' else
        a // b
    )
