#include <stdio.h>
#include <math.h>

int main(void) {
	const double ANSWER = 3.14159;
	double response;
	printf("Введите значение числа pi\n");
	scanf("%lf", &response);
	
	while(fabs(ANSWER - response) > 0.0001) {
		printf("Неточное значение. Введите повторно\n");
		scanf("%lf", &response);
		}
	printf("Требуемая точность достигнута!\n");
	return 0;
	}
