#!/usr/bin/python3
"""See if all boxes in list can be unlocked."""


def canUnlockAll(boxes):
    """Loop through each key in each box."""
    l = len(boxes)
    # print(l)
    if l == 0:
        return False
    opened = [None] * len(boxes)
    opened[0] = 1
    count = 1
    # if not boxes[0] and l > 1:
    #     return False
    print(boxes, l)
    for b, box in enumerate(boxes):
        l2 = len(box)
        print("L2 ", l2)
        if not box and count == l:  # If last box is empty or only 1 null box
            return True
        # else:
        #     if not box:  # and count != l2:
        #         return False
        for k, key in enumerate(box):
            # print("key ", key, "len-1 ", l - 1)
            if key > l - 1 or boxes[key] is None:
                continue
                # return False
            if opened[key] is None:
                opened[key] = 1
                count += 1
            print("Key ", key, "Length ", l, "count ", count)
            if count == l:
                return True
    return False
