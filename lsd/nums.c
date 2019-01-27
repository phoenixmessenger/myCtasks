#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, jnum; 
	printf("Введите любое целое число отличное от нуля\n ", num);
	scanf("%d", &num);
	jnum = num + 10;	
	
	while (num > 0, num <= jnum) {
		printf("Вывод номеров: %4d\n\t ", num++);
			}
	printf("Вывод завершен\n");
	return 0;
	}
