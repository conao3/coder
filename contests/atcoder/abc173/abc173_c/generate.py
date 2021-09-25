#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    H = random.randint(1, 10 ** 9)  # TODO: edit here
    W = random.randint(1, 10 ** 9)  # TODO: edit here
    c = [[None for _ in range(H + W + 4)] for _ in range(H + W + 4)]
    K = random.randint(1, 10 ** 9)  # TODO: edit here
    for j in range(H + 4):
        for i in range(W):
            c[i + j][i + j] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(H, W, K)
    for j in range(H + 4):
        print(*[c[i + j][i + j] for i in range(W)])

if __name__ == "__main__":
    main()