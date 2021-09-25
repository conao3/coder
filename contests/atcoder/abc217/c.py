n = int(input())
p = map(int, input().split())

res = [0]*n

for i, elm in enumerate(p):
    res[elm-1] = i+1

print(" ".join(map(str, res)))

