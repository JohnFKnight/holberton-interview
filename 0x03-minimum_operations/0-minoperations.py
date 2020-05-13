#!/usr/bin/python3

""" Find min num ops"""


from sys import setrecursionlimit

setrecursionlimit(10**6)


def minOperations(n):
    """Calc number of ops."""
    acc = 0

    if n < 2 or type(n) is not int:
        return 0

    for i in range(2, n):
        while (n % i) == 0:
            acc += i
            n = n / i

    if acc == 0:
        acc = n

    return acc
