/*Программа "Кассир-жлоб" из курса CS50, выполненная стандартными*/ 
/* для С99 средствами */
 
//Блок препроцессоров
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Блок ввода, назначения и присвоения
int main(void) {
	float mycount;
	int newmycount;
	int half = 50;
	int quarter = 25;
	int dime = 10;
	int nickel = 1;
	int leftover, takeover;
	int myhalf, myquarter, mydime, mynickel;
	
	do {
	printf("Введите требуемую сумму для сдачи!\n");
	scanf("%f", &mycount);
	newmycount = mycount*100;
}
//Начало рекурсивного блока	
	while(newmycount <= 0);
		myhalf = newmycount/half;
		leftover = newmycount%half;
		
		myquarter = leftover/quarter;
		leftover = leftover%quarter;
		
		mydime = leftover/dime;
		leftover = leftover%dime;
		
		mynickel = leftover/nickel;
		leftover = leftover%nickel;
		
		takeover = myhalf + myquarter + mydime + mynickel + leftover;

//Вывод данных и остановка программы		
		printf("Take your %d halfs, %d quarters, %d dimes and %d nickels\n", myhalf, myquarter, mydime, mynickel);
		printf("Or %d coins\n", takeover);	
		return 0;
}
