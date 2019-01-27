#include <stdio.h>
#include <stdlib.h>

void numb(void);

int main(void) {
	printf("Enter your integer degradian number!\n ");
	numb();	
	return 0;
	}

void numb(void) {
	int i;
	scanf("%d", &i);
	printf("The octopus exp is %o\n", i);
	printf("The hexagonal exp is %x\n", i);
	}
