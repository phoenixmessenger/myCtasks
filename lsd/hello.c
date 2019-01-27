#include <stdio.h>
#include <string.h>
#define COMMNT "OH, that`s very beautiful name! :)"

int main(void) {
	printf("What is your name?\n ");
	char myname[40];
	scanf("%s", myname);
	printf("Hello, %s. %s\n", myname, COMMNT);
	printf("Your name has a %d symbols and take a %d bytes on the memory!\n ", strlen(myname), sizeof(myname));
			}

