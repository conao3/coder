n = int(input())

card = [[0]*13 for _ in range(4)]

for _ in range(n):
    tmp = input().split()
    sym, inx = tmp[0], int(tmp[1])

    card[0 if sym == 'S' else
         1 if sym == 'H' else
         2 if sym == 'C' else
         3][inx-1] = 1

for i in range(4):
    for j in range(13):
        if not card[i][j]:
            print('{} {}'.format('S' if i == 0 else
                                 'H' if i == 1 else
                                 'C' if i == 2 else
                                 'D',
                                 j+1))
