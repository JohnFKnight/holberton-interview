#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/**
 * print_squ - print the square (or a row)
 * @square: num of # to print per row
 *
 * Return: nothing
 */
/* void print_squ(char *square, int level) */
/* { */
/* 	char *ptr = square; */
/* 	/\* Assign 1 Menger Sponge in 3x3 array */
/* 	 * For level > 1: */
/* 	 * Row 1 and 3 = 3 x array */
/* 	 * Row 2: if cell(2,2); cotinue; */
/* 	*\/ */
/* 	/\* char aquare1 = ["###"]["# #"]["###"]; *\/ */
/* 	/\* printf(square1); *\/ */

/* 	int i; */

/* 	// Try #2 */
/* 	/\* for (int k = 0; k < 3; k++); { *\/ */
/* 	/\* 	for (int i = 0; i < 5; i++) { *\/ */
/* 	/\* 		square = ptr; *\/ */
/* 	/\* 		for (int j = 0; j < 3; j++) { *\/ */
/* 	/\* 			printf("%.3s\n", square); *\/ */
/* 	/\* 			/\\* printf("\n"); *\\/ *\/ */
/* 	/\* 			square += 3; *\/ */
/* 	/\* 		} *\/ */
/* 	/\* 		/\\* printf("\n"); *\\/ *\/ */
/* 	/\* 	} *\/ */
/* 	/\* } *\/ */


/* 	// Try #1. */
/*        for (int i = 0; i < 3; i++) { */
/*        	       square = ptr; */
/*        	       for (int j = 0; j < 3; j++) { */
/*        			printf("%.3s\n", square); */
/*        			/\* square += 3; *\/ */
/*        	       } */
/*        	       /\* printf("\n"); *\/ */
/*        } */


/* 	printf("%d = \n", i); */

/* 	/\* for (int a = 0; a < 3; a++) { *\/ */
/* 	/\* 	       printf("%.3s\n", (q)); *\/ */
/* 	/\* 	       q += 3; *\/ */
/* 	/\* } *\/ */


/* } */

/* From Wikiepdai
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

int main(void)
{
       char *square[3][3] = {
       		{"###"},
       		{"# #"},
       		{"###"}
       	};
       char *hash = "#";
       double level = 1;
       printf("3^level = %lf\n", pow(3, level));
       if (level == 0) { printf("#"); }
       // THIS PRINTS CORRECTLY HORIZONTALLY!!
       // PRINT THIS "LEVEL" NUM OF TIMES, SKIPPING 2,2
       /* for (int l = 0; l < 3; l++) { */
	       for (int k = 0; k < 1; k++) {
		       for (int i = 0; i < 3; i++) {
			       for (int j = 0; j < 3; j++) {
				       if ((i == 1) && (j == 1)) {
				       	       printf(" ");
				       	       continue;
				       }
				       /* printf("%s", *square[i]); */
				       printf("#");
			       }
			       printf("\n");
		       }
	       }
       /* } */
}
