#!/usr/bin/python3


def rotate_2d_matrix(rez):
    m = rez
    for x in range(len(m)):
        for row in m:
            rez = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
        rez.reverse()
        for a, row in enumerate(rez):
            for b, col in enumerate(row):
                m[a][b] = col
