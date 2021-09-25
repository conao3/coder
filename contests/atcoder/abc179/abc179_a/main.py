#!/usr/bin/env python3

from typing import *



# def solve(S: str) -> str:
def solve(S):
    if S[-1:] == 's':
        return S+'es'
    else:
        return S+'s'

def main():
    S = input()
    a = solve(S)
    print(a)

if __name__ == '__main__':
    main()
