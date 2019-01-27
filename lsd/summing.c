#include <stdio.h>

int main(void) {
	long num;
	long sum = 0L;
	int status;
	printf("Введите число для последующего суммирования!\n");
	printf("(или q для завершения программы): ");
	status = scanf("%ld", &num);
	
	while(status == 1) {
		sum = sum + num;
		printf("Введите число для последующего суммирования!(или q для завершения программы): ");
		status = scanf("%ld", &num);
		}
	printf("Сумма введённых числа равна %ld\n", sum);
	return 0;
}
