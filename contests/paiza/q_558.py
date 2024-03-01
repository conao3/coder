from typing import List


def main():
    n = int(input())
    a: List[int] = []
    b: List[int] = []

    for _ in range(n):
        a_tmp, b_tmp = map(int, input().split())
        a.append(a_tmp)
        b.append(b_tmp)

    res: List[List[int]] = []
    for i in range(n):
        overwrap = False
        for j in range(len(res)):
            if a[i] <= res[j][0] and res[j][0] <= b[i] - 1:
                # print(f'{res}')
                # print(f'a[i]: {a[i]}, res[j][0]: {res[j][0]}')
                res[j][0] = a[i]
                overwrap = True

            if a[i] - 1 <= res[j][1] and res[j][1] <= b[i]:
                # print(f'{res}')
                # print(f'res[j][1]: {res[j][1]}, b[i]: {b[i]}')
                res[j][1] = b[i]
                overwrap = True

        if not overwrap:
            # print(f'{res}')
            # print(f'not(a[i] < res[j][0] and res[j][1] < b[i])')
            res.append([a[i], b[i]])

    # print(res)
    item = max(res, key=lambda x: x[1] - x[0])
    print(item[1] - item[0] + 1)


if __name__ == '__main__':
    main()
