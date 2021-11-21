x, y = (map(lambda elm: int(elm, 16), input().split()))

print(
    '<' if x < y else
    '>' if x > y else
    '='
)
