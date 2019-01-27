#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, j, n;
	printf("Введите требуемую высоту пирамиды!\n");
	scanf("%d", &i);
	for(j = 0; j < i; ++j) {
		for(n = 0; n < i; ++n) {
			if(j < i - n - 1)
				printf(" ");
		
			else
				printf("#");
				}
	printf("\n");
			}
	printf("Программа выполнена\n");
	return 0;
}
		

