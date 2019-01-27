#include <stdio.h>

int main(void) {
	float inches;
	printf("Tell me your height, please:)\n ");
	scanf("%f", &inches);
	printf("My height is %.3f\n ", inches);
	printf("%.3f inches is a %d santimeters\n ", inches, inches*2.68);
	return 0;
	}
