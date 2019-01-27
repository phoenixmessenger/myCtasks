#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char symb;
int numb_iter;
printf("Введите любой символ, кроме enter. Для завершения введите #\n");

while ((symb = getchar()) != '#') {
    for(numb_iter > 0; numb_iter <= 8; numb_iter++) {
    if (symb == '\n') {
        continue;
    }
    else {
        printf("%c = %d\n", symb, symb);
        symb++;
        numb_iter++;
        }
    }       
    }
    printf("Программа выполнена!\n");
    return 0;
}    