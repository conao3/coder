#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.6.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = random.randint(1, 1000)  # TODO: edit here
    p = [None for _ in range(N)]
    K = random.randint(1, 10 ** 9)  # TODO: edit here
    for i in range(N):
        p[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(N, K)
    print(*[p[i] for i in range(N)])

if __name__ == "__main__":
    main()
