#!/usr/bin/env python3

from typing import *



# def solve(x: int) -> int:
def solve(x):
    return 1 if x==0 else 0

def main():
    x = int(input())
    a = solve(x)
    print(a)

if __name__ == '__main__':
    main()
