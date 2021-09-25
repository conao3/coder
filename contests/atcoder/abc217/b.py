s = [input(), input(), input()]

lst = {
    "ABC": 0,
    "ARC": 0,
    "AGC": 0,
    "AHC": 0,
}

for elm in s:
    lst[elm] = 1

for k, v in lst.items():
    if v == 0:
        print(k)
        break
