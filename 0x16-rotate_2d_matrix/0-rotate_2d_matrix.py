#!/usr/bin/python3
""" Rotate a matrix. """


def printarr(arr):
    """Print matrix."""
    for row in arr:
        print(row)


def rotate_2d_matrix(m):
    """ Roatate a matrix."""
    # printarr(m)
    # print('\n')

    m = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]

    # print("print m after transpose")
    # printarr(m)
    # print('\n')

    for row in m:
        row.reverse()

    # print("After reverse")
    # printarr(m)
    # print('\n')

    # for a, row in enumerate(m):
    #     for b, col in enumerate(row):
    #         m[a][b] = col

    # printarr(m)
    # print('\n')
