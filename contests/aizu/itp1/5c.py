while True:
    h, w = map(int, input().split())

    if h == w == 0:
        break

    sf = True
    for _ in range(h):
        s = sf
        for _ in range(w):
            print('#' if s else '.', end='')
            s = not s

        print('')
        sf = not sf

    print('')
