N = int(input())
T = [0 for _ in range(N)]
K = [0 for _ in range(N)]
A = [[] for _ in range(N)]

for i in range(N):
    tmp = list(map(int, input().split()))
    T[i] = tmp[0]
    K[i] = tmp[1]
    A[i] = tmp[2:]

dp = [None for _ in range(N)]
for i in range(N):
    dp[i] = sum([dp[elm-1] for elm in A[i]]) + T[i]

print(dp[N-1])
