#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	float f;
	f = 2.452364;
	printf("A mantisse of %f is %e\n ", f, FLT_MANT_DIG);
	return 0;
	}
