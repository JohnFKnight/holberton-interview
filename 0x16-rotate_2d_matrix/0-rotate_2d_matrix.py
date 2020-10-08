#!/usr/bin/python3
""" Rotate a matrix. """

def printarr(arr):
    for row in arr:
        print(row)

def rotate_2d_matrix(rez):
    """ Roatate a matrix."""
    printarr(rez)
    print('\n')
    m = rez
    # for x in range(3):
    for row in m:
        # row.reverse()
        # print("Row reversed: ", row)
        m = [[m[j][i] for j in range(len(m))] for i in range(len(m[0]))]
    # print("print rez function")
    # printarr(rez)
    # print("print rez loop")
    for row in m:
        row.reverse()
    print("rez: ", rez)
    print("m: ", m)
        # print( "Before reverse")
        # printarr(rez)
        # rez.reverse()
        # m = rez
        # print("After reverse")
        # printarr(rez)
        # print('\n')
        # print('\n')
        # print(rez)
    # for a, row in enumerate(rez):
    #     # print(row)
    #     for b, col in enumerate(row):
    #         m[a][b] = col

    # for row in m:
    #     print(row)
    # print('\n')
