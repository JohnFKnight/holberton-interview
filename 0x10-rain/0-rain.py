#!/usr/bin/python3
""" Calc rain caught in troughs betwn bars
"""

from typing import List, Dict


def rain(walls: List) -> int:
    """
    Given a list of nummbers that represent walls/bars of
    'number' high and width = 1 unit,
    calculate how many units of 'rain' would fall in the troughs
    of the walls.

    Keep track of peaks in a dictionary of the walls' idx/key and the peak/val.
    Any new peak higher than the previous one resets the dictionary.

    Update the dictionary with subseqent lower peoks.

    *** IF A SUBSEQUENT PEAK = THE PREV PEAK, UPDATE TEH INDEX/KEY. ***

    Compare current value (from walls[1] to walls[-1]) to previous and next.

    If current is between previous and next (not =):
    Increase water by the lower high - current.

    If next > prev and there is a previous peak(s) (before prev idx):
    Increase water by all indexes btwn the previous peak and next.

    If next > previous peak(s), but not the  highest:
    Increase water by all  peak(s) in between - next
    Remove highest previous peaks < next (w dict comprehension),
    Update ditv with next's idx/val.

    Return number of rain units filled the troughs.

    """

    if len(walls) == 0:
        return 0

    length = len(walls)
    water = 0
    last_high = 0
    peaks = {}
    print(walls)
    for i, current in enumerate(walls[1:-1], start=1):
        prev = walls[i - 1]
        nxt = walls[i + 1]

        if prev <= current:
            if last_high < current:
                last_high = current
        elif prev <= nxt:
            water += prev - current
            if last_high < nxt:
                last_high = nxt
        else:
            if last_high < prev:
                last_high = prev
            water += nxt - current
    return water


if __name__ == "__main__":
    """ main """
    rain(walls)
