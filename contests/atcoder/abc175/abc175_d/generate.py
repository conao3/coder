#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = random.randint(1, 10 ** 9)  # TODO: edit here
    P = [None for _ in range(N)]
    C = [None for _ in range(N)]
    K = random.randint(1, 10 ** 9)  # TODO: edit here
    for i in range(N):
        P[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    for i in range(N):
        C[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(N, K)
    print(*[P[i] for i in range(N)])
    print(*[C[i] for i in range(N)])

if __name__ == "__main__":
    main()