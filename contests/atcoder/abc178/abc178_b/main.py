#!/usr/bin/env python3

from typing import *



# def solve(a: int, b: int, c: int, d: int) -> int:
def solve(a, b, c, d):
    ans=[a*c, a*d, b*c, b*d]
    return max(ans)

def main():
    a, b, c, d = map(int, input().split())
    a1 = solve(a, b, c, d)
    print(a1)

if __name__ == '__main__':
    main()
