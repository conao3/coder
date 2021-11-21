r, g, b = map(int, input().split())
tgt = r*100 + g*10 + b
print('YES' if tgt % 4 == 0 else 'NO')
