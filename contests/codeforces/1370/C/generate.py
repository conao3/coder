#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    gew = random.randint(1, 10 ** 9)  # TODO: edit here
    mji = [None for _ in range(gew)]
    for i in range(gew):
        mji[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(gew)
    for i in range(gew):
        print(mji[i])

if __name__ == "__main__":
    main()