#!/usr/bin/python3
"""
Determine if a given data set represents a valid UTF-8 encoding.
"""


def validUTF8(data):
    for num in data:
        if (num & (1 << 7) != 0) or (num < 0 or num > 255):
            return (False)
    return (True)
