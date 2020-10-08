#!/usr/bin/python3

def rotate_2d_matrix(rez):
    # print(arr)
    # arr.reverse()
    # arr.sort()
    # for i, row in enumerate(arr):
    #     # print(row[-1])
    #     print(row)
    #     for j, col in enumerate(row):
    #         print(col)

    m = rez
    for x in range(len(m)):
        for row in m :
            rez = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
        rez.reverse()
        # m = rez
        for a, row in enumerate(rez):
            for b, col in enumerate(row):
                m[a][b] = col
        # m = [[rez[i][j] for i in range(len(rez))] for j in range(len(rez[0]))]
    # print(m)
    # for row in rez:
    #     print(row)
