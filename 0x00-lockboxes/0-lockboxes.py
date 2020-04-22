#!/usr/bin/python3


def canUnlockAll(boxes):
    l = len(boxes)
    if l == 0:
        return False
    opened = [None] * len(boxes)
    opened[0] = 1
    count = 1
    for box in boxes:
        if not boxes[0]:
            return False
        if not box and count == l:  # If last box is empty
            return True
        else:
            if not box:
                return False
        for key in box:
            if key > l - 1:
                return False
            if opened[key] is None:
                opened[key] = 1
                count += 1
                if count == l:
                    return True
    return False
