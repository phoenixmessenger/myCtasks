//Конвертер времени

#include <stdio.h>
#include <stdlib.h>
#define SEC 60

int main(void) {
	int min;
	float hour;
	printf("Введите количество минут\n ", min);
	scanf("%d", &min);
	
		while(min > 0) {
		hour = min/SEC;
		min = min%SEC;
		printf("Время выглядит так: %.f часов и %d минут\n ", hour, min);
		printf("Введите другое значение минут\n ", min);
		scanf("%d", &min);
		}
		
	printf("Ошибка ввода данных!\n ");
	return 0;	
	}
