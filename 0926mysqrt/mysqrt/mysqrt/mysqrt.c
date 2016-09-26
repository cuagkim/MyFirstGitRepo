#include <stdio.h>

int main() {
	double x = 2.;
	double s = 1.;
	int i;
	for (i = 0; i < 6; i++) {
		printf("Before iteration %d, s = %20.15f\n", i, s);
		s = 0.5*(s + x / s);
	}
	printf("After iteration %d, s = %20.15f\n", i, s);
	printf("mysqrt(%f) = %20.15f\n", x, s);

	return 0;

}