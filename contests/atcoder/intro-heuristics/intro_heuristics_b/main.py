#!/usr/bin/env python3
# from typing import *

# def solve(D: str, c: List[str], s: List[List[str]], t: List[str]) -> List[str]:
def solve(D, c, s, t):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    c = [None for _ in range(26)]
    import sys
    tokens = iter(sys.stdin.read().split())
    D = next(tokens)
    s = [[None for _ in range(26)] for _ in range(D + 28)]
    t = [None for _ in range(D)]
    for i in range(26):
        c[i] = next(tokens)
    for j in range(D + 2):
        for i in range(26):
            s[i + j][i] = next(tokens)
    for i in range(D):
        t[i] = next(tokens)
    assert next(tokens, None) is None
    v = solve(D, c, s, t)
    for i in range(D):
        print(v[i])

if __name__ == '__main__':
    main()
