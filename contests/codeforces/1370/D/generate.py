#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.1.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    wki = random.randint(1, 10 ** 9)  # TODO: edit here
    zux = [None for _ in range(wki)]
    zzv = random.randint(1, 10 ** 9)  # TODO: edit here
    for i in range(wki):
        zux[i] = random.randint(1, 10 ** 9)  # TODO: edit here
    print(wki, zzv)
    print(*[zux[i] for i in range(wki)])

if __name__ == "__main__":
    main()
