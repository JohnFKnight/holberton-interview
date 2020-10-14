#!/usr/bin/python3


def rain(walls) -> int:
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
    # while (int i < length - 2):
    print(walls)
    for i, current in enumerate(walls[1:-1], start=1):
        prev = walls[i - 1]
        nxt = walls[i + 1]
        max_wall = max(prev, nxt)
        min_wall = min(prev, nxt)
        # max_peaks = max(peaks.keys(), key=(lambda k: peaks[k]))
        # min_peaks - min(peaks.keys(), key=(lambda k: peaks[k]))
        # # print(prev, wall, next)
        # if prev < current > nxt:  # No trough. Current is peak.
        #     peaks = get_peaks(peaks, prev, current, nxt, i)
        # elif prev > current < nxt:  # Trough. Calc water incl prev peaks.
        #     peaks = get_peaks(peaks, prev, current, nxt, i)
        #     water += min_wall - current
        # water += rain(peaks, prev, current, nxt, i)


        if prev <= current:
            if current < last_high:
                water += last_high - current
            else:
                water += last_high
            if last_high < current:
                last_high = current
            # peaks.append(current)
            # continue
        elif prev <= nxt:
            # peaks.append(nxt)
            water += prev - current
            if last_high < nxt:
                last_high = nxt
            # continue
        else:
            if last_high < prev:
                last_high = prev
            # peaks.append(prev)
            water += nxt - current
            # next is new peak
            # for peak in peaks:
            #     if nxt <= peak:
            #         water += peak
    return water

def get_peaks(peaks, prev, curr, nxt, idx):
    max_wall = max(prev, nxt)
    min_wall = min(prev, nxt)
    max_peaks = max(peaks.keys(), key=(lambda k: peaks[k]))
    min_peaks - min(peaks.keys(), key=(lambda k: peaks[k]))

    if max_wall >= max_peaks:
        peaks.clear()
    elif max_wall >= min_peaks:
        for k, v in peaks.items():
            if max_wall >= v:
                peaks.pop(k)
    peaks.update(idx, max_wall)
    return peaks

    # if prev < current > nxt:
    #     last_high = current
    #     peaks.update({i : current})   # append(current)
    #     peaks.update({i + 1 : nxt})  # append(next)
    # elif prev > current < nxt:
    #     water += min(prev, nxt) - current
    #     if max(prev, nxt) >= peaks_max:
    #         peaks.clear()
    #         peaks.update(i, max(prev, nxt))

# def get_water(peaks, prev, curr, nxt, idx):
#     nidx = idx + 1
#     pidx = idx - 1
#     if next 
#     water += 

if __name__ == "__main__":
    rain()
