/*программа вывода таблицы ASCII*/
 /* для буквенных символов */

//блок препроцессора
#include <stdio.h>

//операционный блок
int main(void) {
	char ch;
		for(ch = 'a'; ch <= 'z'; ch++)
			printf("Значение символа %c в ASCII соответствует %d\n", ch, ch);
			printf("Программа выполнена\n");
			return 0;
	
	}
