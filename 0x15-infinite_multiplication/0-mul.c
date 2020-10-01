#include  <stdio.h>
#include <stdlib.h>

int  main(char *num) {
	/* printf(len(num)); */
	/* putchar(strlen("hello")); */
	printf("%lu\n", sizeof(num) / sizeof(num[0]));
	malloc(sizeof(num) / sizeof(num[0]));
	printf("%s\n", num);
	/* putchar(num[0]); */
	/* putchar('\n'); */
	/* return ((signed int)(num)); */
}
