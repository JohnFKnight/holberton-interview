#!/usr/bin/python3
"""
Determine if a given data set represents a valid UTF-8 encoding.
"""


def validUTF8(data):
    for num in data:
        if num > 255:
            return (False)
    return (True)
