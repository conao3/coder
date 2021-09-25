S = int(input())

s = S % 60
S = S // 60

m = S % 60
S = S // 60

h = S

print(':'.join(map(str, [h, m, s])))
