#!/usr/bin/env python3

from typing import *



# def solve(N: str, Q: str, Query: List[str]) -> int:
def solve(N, Q, Query):
    pass

def main():
    N, Q = input().split()
    Query = [None for _ in range(Q)]
    for i in range(Q):
        Query[i] = input()
    a = solve(N, Q, Query)
    print(a)

if __name__ == '__main__':
    main()
