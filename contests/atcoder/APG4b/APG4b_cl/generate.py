#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = random.randint(1, 10 ** 9)  # TODO: edit here
    op = [None for _ in range(N)]
    B = [None for _ in range(N)]
    A = random.randint(1, 10 ** 9)  # TODO: edit here
    for i in range(N):
        op[i] = random.randint(1, 10 ** 9)  # TODO: edit here
        B[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(N)
    print(A)
    for i in range(N):
        print(op[i], B[i])

if __name__ == "__main__":
    main()
