#!/usr/bin/python3
# Tail recursive. -Will?
# Least num of commands to go from x=1 to n

from sys import setrecursionlimit

setrecursionlimit(10**6)


def minOperations(n):  # , x="H", cp="H", acc=0):
    """Calc number of ops."""
    acc = 0
    h = "H"

    if n < 2 or type(n) is not int:
        return 0

    for i in range(2, n):
        while (n % i) == 0:
            # print (n, i)
            acc += i
            n = n / i
            h += h * i
    # print(i, acc)
    if acc == 0:
        h = h * n
        acc = n
    return acc


# def minOperations(n):
#     """Driver code."""


#     ops = minop(n)
#     return ops
