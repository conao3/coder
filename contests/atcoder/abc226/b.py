N = int(input())
L = [0 for _ in range(N)]
a = [[] for _ in range(N)]

for i in range(N):
    tmp = list(map(int, input().split()))
    L[i] = tmp[0]
    a[i] = tmp[1:]

cache = []
cache_sum = []
for i in range(N):
    if sum(a[i]) not in cache_sum:
        cache.append(a[i])
        cache_sum.append(sum(a[i]))
    elif a[i] not in cache:
        cache.append(a[i])
        cache_sum.append(sum(a[i]))

print(len(cache))
