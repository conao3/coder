#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = random.randint(1, 10 ** 9)  # TODO: edit here
    M = random.randint(1, 10 ** 9)  # TODO: edit here
    L = [None for _ in range(M)]
    R = [None for _ in range(M)]
    D = [None for _ in range(M)]
    for i in range(M):
        L[i] = random.randint(1, 10 ** 9)  # TODO: edit here
        R[i] = random.randint(1, 10 ** 9)  # TODO: edit here
        D[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(N, M)
    for i in range(M):
        print(L[i], R[i], D[i])

if __name__ == "__main__":
    main()