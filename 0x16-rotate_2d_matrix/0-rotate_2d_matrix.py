#!/usr/bin/python3
""" Rotate a matrix. """


def rotate_2d_matrix(rez):
    """ Roatate a matrix."""
    m = rez
    for x in range(len(m)):
        for row in m:
            rez = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
        rez.reverse()
        for a, row in enumerate(rez):
            for b, col in enumerate(row):
                m[a][b] = col
