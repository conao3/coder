#!/usr/bin/env python3
# usage: $ oj generate-input 'python3 generate.py'
import random

# generated by online-judge-template-generator v4.6.0 (https://github.com/kmyk/online-judge-template-generator)
def main():
    S = ''.join([random.choice('abcde') for range(random.randint(1, 100))])  # TODO: edit here
    T = ''.join([random.choice('abcde') for range(random.randint(1, 100))])  # TODO: edit here
    A = random.randint(1, 10 ** 9)  # TODO: edit here
    B = random.randint(1, 10 ** 9)  # TODO: edit here
    U = ''.join([random.choice('abcde') for range(random.randint(1, 100))])  # TODO: edit here
    print(S, T)
    print(A, B)
    print(U)

if __name__ == "__main__":
    main()
