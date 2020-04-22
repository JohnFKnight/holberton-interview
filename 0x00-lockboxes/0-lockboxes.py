#!/usr/bin/python3
"""
Unlock list indices i.e. boxes.
Boxes can have multiple keys (index number)
1st box (index 0) always open.
Make unlocked list = len(boxes)
As a box/index is unlocked, put 1 in that index of unlocked.
For each key in a box:
? Check len(box)? If 1, try key. If > 1, loop thru. ??
If box 1 (index 0) is blank, return false
- Check if key is within len range.
-- If out && only key, return False.
-- else if out && more keys, get next key
Check if key/index is 1 in opened;
- if not, set it to 1, increment opened counter
- else continue.
If opened counter = len(boxes), return true
- else continue
Return false
"""


def canUnlockAll(boxes):
    l = len(boxes)
    if l == 0:
        return False
    opened = [None] * len(boxes)
    opened[0] = 1
    count = 1
    for box in boxes:
        l2 = len(box)
        if not boxes[0]:
            return False
        if not box and count == l:
            return True
        else:
            if not box:
                return False
        for key in box:
            if key > l and count < l:
                continue
            else:
                if key > l:
                    return False
            if opened[key] is None:
                opened[key] = 1
                count += 1
                if count == l:
                    return True
    print("Last False")
    return False
