#!/usr/bin/python3
"""
Main file for testing
"""

minOperations = __import__('0-minoperations').minOperations

n = 4
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))

n = 7
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))

n = 9
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))

n = 1
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))

n = 2
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))

n = 0
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))

n = 9999
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))

n = 2147483640
print("Min number of operations to reach {} characters: {}"
      .format(n, minOperations(n)))
