#!/usr/bin/env python3

from typing import *

YES = 'Yes'
NO = 'No'

# def solve(N: int, A: List[int], B: List[int]) -> Any:
def solve(N, A, B):
    pass

def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    N = int(next(tokens))
    A = [None for _ in range(N)]
    B = [None for _ in range(N)]
    for i in range(N):
        A[i] = int(next(tokens))
    for i in range(N):
        B[i] = int(next(tokens))
    assert next(tokens, None) is None
    ans = solve(N, A, B)
    print(ans)  # TODO: edit here

if __name__ == '__main__':
    main()
