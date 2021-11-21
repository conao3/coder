x, a, b = map(int, input().split())

len_a = abs(a - x)
len_b = abs(b - x)

print('A' if len_a < len_b else 'B')
