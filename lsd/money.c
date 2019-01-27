//* конвертация гривен в доллары
#include <stdio.h>
#define EXCH 27.01

int main(void) {
	int uah, centos;
	float usd;
	printf("Введите сумму в гривнах от 1 до 100 \n ", uah);
	scanf("%d", &uah);
	
	while (uah > 0, uah < 100) {
		usd = uah/EXCH;
		centos = usd*100;
		centos = centos%100;
		printf("Вы можете купить %.2f долларов\n ", usd);
		printf("Или же %.f долларов и %d центов\n ", usd, centos);
		printf("Введите новую сумму в гривнах\n ", uah);
		scanf("%d", &uah);
		}
	printf("Ошибка ввода. Введите число между 0 и 100\n ");
	return 0;
	}
