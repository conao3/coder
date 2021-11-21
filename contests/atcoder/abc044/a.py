n, k, x, y = map(int, [input() for _ in range(4)])

res = 0
for i in range(n):
    if i+1 <= k:
        res += x
    else:
        res += y

print(res)
