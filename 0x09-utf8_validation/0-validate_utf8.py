#!/usr/bin/python3
"""
Determine if a given data set represents a valid UTF-8 encoding.
"""


def validUTF8(data):
    """ Test each num in list if UTF-8."""

    for num in data:
        if (num & (1 << 7) != 0) and num > 127:
            return (False)
    return (True)
