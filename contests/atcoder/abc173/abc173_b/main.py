#!/usr/bin/env python3
# from typing import *

# def solve(N: int, S: List[str]) -> Any:
def solve(N, S):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = int(input())
    S = [None for _ in range(N)]
    for i in range(N):
        S[i] = input()
    ans = solve(N, S)
    print(ans)  # TODO: edit here

if __name__ == '__main__':
    main()