#!/usr/bin/env python3
# from typing import *

# def solve(X: str, N: str, p: List[str]) -> int:
def solve(X, N, p):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    X = next(tokens)
    N = next(tokens)
    p = [None for _ in range(N)]
    for i in range(N):
        p[i] = next(tokens)
    assert next(tokens, None) is None
    vat = solve(X, N, p)
    print(vat)

if __name__ == '__main__':
    main()
