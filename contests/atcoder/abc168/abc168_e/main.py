#!/usr/bin/env python3
# from typing import *

# def solve(N: int, A: List[int], B: List[int]) -> int:
def solve(N, A, B):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = int(input())
    A = [None for _ in range(N)]
    B = [None for _ in range(N)]
    for i in range(N):
        A[i], B[i] = map(int, input().split())
    rvx = solve(N, A, B)
    print(rvx)

if __name__ == '__main__':
    main()