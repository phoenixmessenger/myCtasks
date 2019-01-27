#include <stdio.h>

int main(void) {
	int monkeys [8] = {0};
	printf("How many monkeys you have?\n");
	monkeys [8] = getchar();
	scanf("%d", &monkeys);
	printf("I have a %d monkeys!\n", monkeys);
	return 0;
}
