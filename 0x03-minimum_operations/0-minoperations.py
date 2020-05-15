#!/usr/bin/python3

""" Find min num ops"""


def minOperations(n):
    """Calc number of ops."""
    acc = 0

    for i in range(2, n + 1):
        if n == 1:
            break
        while n % i == 0:
            acc += i
            n = n / i
    return acc
