/* rowsl.c использование вложенных циклов */

#include <stdio.h>
#define ROWS 4
#define CHARS 8

int main(void) {
int row;
char ch;

for(row = 0; row < ROWS; row++) {
		for(ch = ('$' + row); ch < ('$' + CHARS); ch++)
			printf("%c", ch);
		printf("\n");
		}
	return 0;
}
