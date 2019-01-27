#include <stdio.h>
#include <stdlib.h>
/*Напишите программу, которая читает входные символы до тех пор, пока не
встретится с имвол #, а затем отоб ражает количество считанных пробелов , ко­
личе ство с имволов новой строки и количе ство всех других с имволов.*/
int main(void) 
{
    char intsymb;
    int eofl = 0;
    int number_space = 0;
    int numb_intsymb = 0;
    int numb_other = 0;

    while ((intsymb = getchar()) != '#') {
        if(intsymb == '\n') {
            eofl++;
        }
        if(intsymb == ' ') { 
            number_space++;
        }
    numb_intsymb++;
    }
    numb_other = numb_intsymb - (eofl + number_space);
    printf("%d других символов \t %d пробелов \t %d символов конца строки!\n", numb_other, number_space, eofl);
    return 0;
}
