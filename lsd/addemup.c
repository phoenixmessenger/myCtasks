#include <stdio.h>

int main(void) {
int count, sum;
printf("Введите число\n");
scanf("%d", &sum);

while (count++ < sum) {
	sum = sum + count;
printf ("sum = %d\n", sum);
return 0;
}
}
