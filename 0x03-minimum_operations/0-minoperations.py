#!/usr/bin/python3

""" Find min num ops"""


def minOperations(n):
    """Calc number of ops."""
    acc = 0

    # if n < 2 or type(n) is not int:
    #     return 0
    # i = 2
    # while i <= n:
    for i in range(2, n + 1):
        if n == 1:
            break
        # print("i1 ", i, "n1 ", n, "acc1 ", acc)
        while n % i == 0:
        # if n % i == 0:
            # print("i2 ", i, "n2 ", n, "acc2 ", acc)
            acc += i
            n = n / i
            # print("i3 ", i, "n3 ", n, "acc3 ", acc)
        # else:
        #     i += 1

    return acc
