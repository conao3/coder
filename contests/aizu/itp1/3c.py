while True:
    x, y = map(int, input().split())
    if x == y == 0:
        break

    print(*((x, y) if x < y else (y, x)))
