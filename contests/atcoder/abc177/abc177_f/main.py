#!/usr/bin/env python3
# from typing import *



# def solve(H: int, W: int, A: List[int], B: List[int]) -> Any:
def solve(H, W, A, B):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.6.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    H, W = map(int, input().split())
    A = [None for _ in range(H)]
    B = [None for _ in range(H)]
    for i in range(H):
        A[i], B[i] = map(int, input().split())
    ans = solve(H, W, A, B)
    print(ans)  # TODO: edit here

if __name__ == '__main__':
    main()
