#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    c = [None for _ in range(26)]
    D = random.randint(1, 10 ** 9)  # TODO: edit here
    s = [[None for _ in range(26)] for _ in range(D + 28)]
    for i in range(26):
        c[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    for j in range(D + 2):
        for i in range(26):
            s[i + j][i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(D)
    print(*[c[i] for i in range(26)])
    for j in range(D + 2):
        print(*[s[i + j][i] for i in range(26)])

if __name__ == "__main__":
    main()
