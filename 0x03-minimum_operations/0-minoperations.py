#!/usr/bin/python3

""" Find min num ops"""


from sys import setrecursionlimit

setrecursionlimit(10**6)


def minOperations(n):
    """Calc number of ops."""
    ops = 0
    i = 2
    while i <= n:
        if n % i == 0:
            ops += i
            n /= i
        else:
            i += 1
    return ops
