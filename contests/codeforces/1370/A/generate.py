#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    iux = random.randint(1, 10 ** 9)  # TODO: edit here
    vwy = [None for _ in range(iux)]
    for i in range(iux):
        vwy[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(iux)
    for i in range(iux):
        print(vwy[i])

if __name__ == "__main__":
    main()