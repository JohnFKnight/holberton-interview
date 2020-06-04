#!/usr/bin/python3

# Calculate statistics from input from stdin
# <IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code><file size>
# <status code>: <number>
# possible status code: 200, 301, 400, 401, 403, 404, 405 and 500

import sys
import re
from collections import Counter
import signal


def printall(status, fsize):
    print("File size: {}".format(sum(fsize)))
    [print("{}: {}".format(k, v)) for k, v in Counter(status).items()]


def signal_handler(signal, frame):
    print (code, size, status, fsize)
    # printall(code, size)
    sys.exit(0)

code = []
size = []
for c, line in enumerate(sys.stdin):
    if (c > 0 and c % 9 == 0):
        printall(code, size)
    signal.signal(signal.SIGINT, signal_handler)
    line = line.rstrip()
#     # print(re.split("-| ", line))
    line = re.findall(r'(?:[^\s,"]|"(?:\\.|[^"])*")+', line)
    if (line[5]):
        code.append(line[5])
    size.append(int(line[6]))
