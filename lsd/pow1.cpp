#include <iostream>

int main() {
	int num, pow;
	int result = 1;
	printf("Enter your numbers!\n");
	scanf("%d%d", &num, &pow);
	for(int cnt = 0; cnt != pow; ++cnt)
		result *= num;
		
	std::cout << num
			  << " raised to the power of "
			  << pow << ": \t"
			  << result << std::endl;
	return 0;
	}
