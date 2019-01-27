#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	printf("Введите имя!\n");
	char myname[40];
	scanf("%s", &myname);
	std::cout << "Привет, "
		      <<  myname
		      << "!\n ";
	return 0;
	}
