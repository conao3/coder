#!/usr/bin/env python3
# from typing import *

# def solve(N: int, X: List[int], Y: List[int], U: List[str]) -> str:
def solve(N, X, Y, U):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    N = int(next(tokens))
    X = [None for _ in range(N)]
    Y = [None for _ in range(N)]
    U = [None for _ in range(N)]
    for i in range(N):
        X[i] = int(next(tokens))
        Y[i] = int(next(tokens))
        U[i] = next(tokens)
    assert next(tokens, None) is None
    jtz = solve(N, X, Y, U)
    print(jtz)

if __name__ == '__main__':
    main()
