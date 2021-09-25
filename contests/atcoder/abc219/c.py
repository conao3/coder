x, n = input(), int(input())
s = [input() for _ in range(n)]

trans = {a: b for a, b in zip(x, "abcdefghijklmnopqrstuvwxyz")}
rev_trans = {b: a for a, b in zip(x, "abcdefghijklmnopqrstuvwxyz")}

trans_s = [elm.translate(str.maketrans(trans)) for i, elm in enumerate(s)]

for elm in sorted(trans_s):
    print(elm.translate(str.maketrans(rev_trans)))
