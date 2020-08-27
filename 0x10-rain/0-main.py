#!/usr/bin/python3
"""
0_main
"""
rain = __import__('0-rain').rain

if __name__ == "__main__":
    walls = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
    print(rain(walls))

    walls = [0, 1, 0, 2, 0, 3, 0, 4]
    print(rain(walls))

    walls = [3, 0, 3]
    print(rain(walls))

    walls = [0, 4, 5, 1]
    print(rain(walls))

    walls = [1, 4, 2, 5, 0, 6, 2, 3, 4]
    print(rain(walls))

    walls = [1, 4, 2, 7, 0, 6, 2, 3, 4]
    print(rain(walls))

    walls = [1, 4, 2, 3, 0, 6, 2, 3, 4]
    print(rain(walls))

    walls = [1, 4, 2, 3, 7, 0, 6, 2, 3, 4]
    print(rain(walls))

    walls = [1, 4, 2, 3, 9, 0, 6, 2, 3, 7]
    print(rain(walls))
