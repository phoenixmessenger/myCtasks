#include <stdio.h>
#define INDEX 4

int main(void) {
	int i;
	char dlr = '$';
		for(i = 0; i <= INDEX; i++) {
			while(++dlr <= 8)
				printf("%c", dlr);
			printf("\n");
			}
	printf("Программа выполнена\n");
	return 0;
}
