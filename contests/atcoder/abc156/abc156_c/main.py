#!/usr/bin/env python3
# from typing import *

# def solve(N: int, X: List[int]) -> int:
def solve(N, X):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    N = int(next(tokens))
    X = [None for _ in range(N)]
    for i in range(N):
        X[i] = int(next(tokens))
    assert next(tokens, None) is None
    ukf = solve(N, X)
    print(ukf)

if __name__ == '__main__':
    main()
