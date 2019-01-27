#include <stdio.h>

void one_three(void);
void two(void);
int main(void) {
	printf("Начать отсчёт!\n ");
	one_three();
	printf("Конец\n ");
	}

void one_three(void) {
	printf("Один\n ");
	two();
	printf("три\n ");
	}
void two (void) {
		printf("два\n ");
		}
