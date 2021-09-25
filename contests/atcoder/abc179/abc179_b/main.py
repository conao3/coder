#!/usr/bin/env python3

from typing import *

YES = 'Yes'
NO = 'No'

# def solve(n: int, dlist: List[List[int]]) -> bool:
def solve(n, dlist):
    flag=False
    c = 0
    for d in dlist:
        if d[0]==d[1]:
            c = c+1
        else:
            if c>=3:
                return True
            c=0

    return c>=3

def main():
    n = int(input())
    dlist = []
    for i in range(n):
        dlist.append(list(map(int, input().split())))
    print(YES if solve(n, dlist) else NO)

if __name__ == '__main__':
    main()
