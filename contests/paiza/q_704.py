from typing import List


def main():
    n, m = map(int, input().split())
    x: List[int] = []
    y: List[int] = []

    for _ in range(m):
        a_tmp, b_tmp = map(int, input().split())
        x.append(a_tmp)
        y.append(b_tmp)

    res = [1 for _ in range(n)]
    for i in range(m):
        res[x[i] - 1] += res[y[i] - 1]
        res[y[i] - 1] = 0

    max_res = max(res)
    for i in range(n):
        if res[i] == max_res:
            print(i + 1)


if __name__ == '__main__':
    main()
