#include <stdlib.h>
#include <stdio.h>
/* #include "slide_line.h" */

int slide_line(int *line, size_t size, int direction)
{
	/* 1. If dir = L, start at idx 0;  */
	/* 2. If dir = R, start at end (len -1); */
	/* 3. if first num = 0, check for consecutive num = 0; */
	/*   add them to the next num. Put sum in beginning idx */
	/* 4. if next num = current (non-zero num); add them. */
	/* 5. Put sum in beginning idx in step 3 */
	/* 6. Check for following consecutive zeroes. Add to prev sum idx */
	/* 7. Continue tomorrow (Wed) */

	int len = size;
	int i = 0;
	int currIdx = 0;

	if (direction != 0 && direction != 1)
	{ printf("DIRECTION %i\n", direction);
		return (EXIT_FAILURE);
	}
	if (direction == 0)
	{
		for (i = 0; i < len; i++) {
			currIdx = i;
			while (line[i] == 0)
				i++;
			if (currIdx == i) continue;
			if (line[i] != line[currIdx])
				line[currIdx + 1] = line[i];
			else
				line[currIdx] += line[i];
			i--;
		}
		if (currIdx < len)
		{
			for (i = currIdx; i < len; i++)
				line[i] = 0;
		}
	}
	for (int loop; loop < len; loop++)
		printf("LINE %i\n", line(loop));
	else
	{
		for (i = len - 1; i != -1; i--) {
			currIdx = i;
			while (line[i] == 0)
				i--;
			if (currIdx == i) continue;
			if (line[i] != line[currIdx])
				line[currIdx - 1] = line[i];
			else
				line[currIdx] += line[i];
			i++;
		}
		if (currIdx > 0)
		{
			for (i = currIdx;; i--)
				line[i] = 0;
		}
	}
	return (EXIT_SUCCESS);
}
