#!/usr/bin/env python3

from typing import *



# def solve(N: int, x: List[int], y: List[int]) -> int:
def solve(N, x, y):
    pass

def main():
    N = int(input())
    x = [None for _ in range(N)]
    y = [None for _ in range(N)]
    for i in range(N):
        x[i], y[i] = map(int, input().split())
    a = solve(N, x, y)
    print(a)

if __name__ == '__main__':
    main()