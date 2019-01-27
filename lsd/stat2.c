#include <stdio.h>
#define PI 3.141593
#define I 24

int main(void) {
	int ten = 10;
	int cost = 1000;
	float f = 3.15444;
	printf("The pi const is %.2f\n ", PI);
	printf ("One foot\n more than %-10d inches\n ", ten);
	printf("%c%d\n ", '$', 2 * cost);
	printf("%c%d\n", 'A', I);
	return 0;
	}
