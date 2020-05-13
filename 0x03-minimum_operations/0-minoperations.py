#!/usr/bin/python3
""" Fin min ops."""


# Tail recursive. -Will?
# Least num of commands to go from x=1 to n



from sys import setrecursionlimit

setrecursionlimit(10**6)

def minop(n, x="H", cp="H", acc=0):
    """ Calc min ops """

    if (n == 1 or n < 0):
        return 0
    if (len(x) == n):
        return acc + 1
    if (len(x) > n):
        return -1

    # option copy paste
    y = minop(n, x*2, x, acc+2)
    # print("y=", y)

    # option paste
    z = minop(n, x+cp, cp, acc+1)

    # print("z=", z)
    # print("####" * 3)
    if (y != -1 and y <= z):
        return int(y)
    return int(z)

# print(minop(10))


def minOperations(n):
    """Driver code."""

    # if (__name__ == "__main__"):
    ops = minop(n)
    if (ops == -1):
        return 0
    return ops
