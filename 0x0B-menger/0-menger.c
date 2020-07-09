#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
 * From Wikiepdai
 * Level 0 = 1 square
 * Level 1... n = each previous square split into 9 squares
 * with center sqaure removed from each
*/

/**
 * menger - print menger square
 * @level: the size of the menger square
 *
 * Return: nothing
 */

void menger(int level)
{
	if (level == 0)
	{
		printf("#\n");
		return;
	}

	int bigrow = pow(3, level - 1), detail = pow(3, level);

	for (int k = 0; k < bigrow; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < detail; j++)
			{
				if (i == 1 && j != 0 && j % 3 == 1)
				{
					printf(" ");
					continue;
				}
				if ((k % 3 == 1) && j >= 3 && j <= 5)
				{
					printf(" ");
					continue;
				}
				if ((k % 3 == 1) && j >= 12 && j <= 14)
				{
					printf(" ");
					continue;
				}
				if ((k % 3 == 1) && j >= 21 && j <= 23)
				{
					printf(" ");
					continue;
				}
				printf("#");
			}
			printf("\n");
		}
	}
}
