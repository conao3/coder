#!/usr/bin/env python3
# from typing import *

# def solve(N: int, X: List[int], D: List[int]) -> int:
def solve(N, X, D):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = int(input())
    X = [None for _ in range(N)]
    D = [None for _ in range(N)]
    for i in range(N):
        X[i], D[i] = map(int, input().split())
    lxq = solve(N, X, D)
    print(lxq)

if __name__ == '__main__':
    main()
