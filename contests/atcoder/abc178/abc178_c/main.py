#!/usr/bin/env python3

from typing import *

MOD = 1000000007

def power_func(a,n,p):
    bi = str(format(n,"b"))#2進表現に
    res = 1
    for i in range(len(bi)):
        res = (res*res) %p
        if bi[i] == "1":
            res = (res*a) %p
    return res

# def solve(N: int) -> int:
def solve(N):
    if N<=1:
        return 0

    ans=((N%MOD)*((N-1)%MOD))%MOD
    ans=(ans*power_func(10,N-2,MOD))%MOD
    return ans

def main():
    N = int(input())
    a = solve(N)
    print(a)

if __name__ == '__main__':
    main()
