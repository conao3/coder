#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    N = random.randint(1, 10 ** 9)  # TODO: edit here
    X = [None for _ in range(N)]
    D = [None for _ in range(N)]
    for i in range(N):
        X[i] = random.randint(1, 10 ** 9)  # TODO: edit here
        D[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(N)
    for i in range(N):
        print(X[i], D[i])

if __name__ == "__main__":
    main()
