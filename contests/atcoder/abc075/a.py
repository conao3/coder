a, b, c = sorted(list(map(int, input().split())))

print(
    a if b == c else
    b if c == a else
    c if a == b else
    '?'
)
