#!/usr/bin/python3
"""
Determine if a given data set represents a valid UTF-8 encoding.
"""

def validUTF8(data):
    # print(len(data))
    mask1 = 1 << 7
    mask2 = 1 << 6
    if len(data) == 1:
        if num & mask1:
            return False
        else:
            return True
    for i, num in enumerate(data):
        if num < 128:
            if num & mask1 != 0:  #See how many bytes it is; i.e. MSB's = 1
                return False
            else:
                return True
        elif not (num & mask1 and not (num & mask2)):
            return (False)
    return (True)
