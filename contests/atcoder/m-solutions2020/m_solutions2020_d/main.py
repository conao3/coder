#!/usr/bin/env python3
# from typing import *

# def solve(N: int, A: List[int]) -> int:
def solve(N, A):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    N = int(next(tokens))
    A = [None for _ in range(N)]
    for i in range(N):
        A[i] = int(next(tokens))
    assert next(tokens, None) is None
    bvy = solve(N, A)
    print(bvy)

if __name__ == '__main__':
    main()
