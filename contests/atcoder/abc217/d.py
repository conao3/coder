L, Q = map(int, input().split())

w = {"0": L}
plist = [0]

for _ in range(Q):
    c, x = map(int, input().split())
    if c == 1:
        target_p = None
        for p in plist:
            if p < x:
                target_p = p
            else:
                break

        w[str(x)] = target_p + w[str(target_p)] - x
        w[str(target_p)] = w[str(target_p)] - w[str(x)]

        plist = plist + [x]
        plist.sort()

    elif c == 2:
        target_p = None
        for p in plist:
            if p < x:
                target_p = p
            else:
                break

        print(w[str(target_p)])
