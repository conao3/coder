from typing import List


def main():
    n = int(input())
    a: List[str] = []
    b: List[str] = []

    for _ in range(n):
        a_tmp, b_tmp = input().split()
        a.append(a_tmp)
        b.append(b_tmp)

    res = 0
    for i in range(n):
        if a[i] == 'G' and b[i] == 'C':
            res += 1
        if a[i] == 'C' and b[i] == 'P':
            res += 1
        if a[i] == 'P' and b[i] == 'G':
            res += 1

    print(res)


if __name__ == '__main__':
    main()
