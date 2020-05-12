#!/usr/bin/python3
# Tail recursive. -Will?
# Least num of commands to go from x=1 to n

from sys import argv


def minop(n, x=1, cp=1, acc=0):
    """ Calc min ops """

    if (n == 1 or n < 0):
        return 0
    if (x == n):
        return acc + 1
    if (x > n):
        return -1

    # option copy paste
    y = minop(n, x*2, x, acc+2)
    # print("y=", y)

    # option paste
    z = minop(n, x+cp, cp, acc+1)

    # print("z=", z)
    # print("####" * 3)
    if (y != -1 and y <= z):
        return y
    return z

# print(minop(10))


def minOperations(n):
    """Driver code."""

    # if (__name__ == "__main__"):
    ops = minop(n)
    return ops
