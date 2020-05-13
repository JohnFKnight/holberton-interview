#!/usr/bin/python3
# Tail recursive. -Will?
# Least num of commands to go from x=1 to n

from sys import setrecursionlimit

setrecursionlimit(10**6)


def minop(n):  # , x="H", cp="H", acc=0):
    acc = 0

    if n < 2:
        return 0

    for i in range(2, n):
        while (n % i) == 0:
            # print (n, i)
            acc += i
            n = n / i
    # print(i, acc)
    if acc == 0:
        acc = n
    return acc


def minOperations(n):
    """Driver code."""

    # if (__name__ == "__main__"):
    ops = minop(n)
    # if (ops == -1):
    #     return 0
    return ops
