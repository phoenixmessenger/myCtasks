//перевод дней в недели

/*препроцессоры*/
#include <stdio.h>
#define DFW 7

//объявление функций
void relink(void);
void cycle(void);

//точка входа в программу
int main(void) {
	int mydays, days;
	float week;

//описание функции перенаправления к началу
void relink(void) {	
	printf("Введите необходимое количество дней\n");
	scanf("%d", &mydays);
}

//описание структуры цикла через функцию
void cycle(void) {
		while(mydays > 0) {
		days = mydays%DFW;
		week = mydays/DFW;
		printf("%d дней составляет %.f недель и %d дней\n ", mydays, week, days);
		printf("Введите необходимое количество дней\n");
		scanf("%d", &mydays);
		}
	printf("Ошибка ввода данных. Введите натуральное  число!\n");
	}

//точка вывода результата на экран
	relink();
	cycle();
	relink();	
	}
