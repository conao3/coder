#!/usr/bin/env python3
# from typing import *

# def solve(k: int, q: int, d: List[int], n: List[int], x: List[int], m: List[int]) -> Any:
def solve(k, q, d, n, x, m):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    k = int(next(tokens))
    q = int(next(tokens))
    d = [None for _ in range(k)]
    n = [None for _ in range(q)]
    x = [None for _ in range(q)]
    m = [None for _ in range(q)]
    for i in range(k):
        d[i] = int(next(tokens))
    for i in range(q):
        n[i] = int(next(tokens))
        x[i] = int(next(tokens))
        m[i] = int(next(tokens))
    assert next(tokens, None) is None
    ans = solve(k, q, d, n, x, m)
    print(ans)  # TODO: edit here

if __name__ == '__main__':
    main()