#!/usr/bin/env python3
# from typing import *

# def solve(wki: int, zzv: int, zux: List[int]) -> int:
def solve(wki, zzv, zux):
    pass  # TODO: edit here

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    wki = int(next(tokens))
    zzv = int(next(tokens))
    zux = [None for _ in range(wki)]
    for i in range(wki):
        zux[i] = int(next(tokens))
    assert next(tokens, None) is None
    fcm = solve(wki, zzv, zux)
    print(fcm)

if __name__ == '__main__':
    main()