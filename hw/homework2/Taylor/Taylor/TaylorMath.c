#include <math.h>

double myexp(double x, int n) {
	if (n < 0) {
		printf("Invalid input.iteration must be non - negative integer\n");
		return NAN;
	}
	
	int i;
	double output = 0;
	double temp = 1;

	for (i = 0; i <= n; i++) {
		output += temp;
		temp *= x / (i + 1);
	}
	return output;
}

double mysin(double x, int n) {
	if (n < 0) {
		printf("Invalid input.iteration must be non - negative integer\n");
		return NAN;
	}
	
	int i;
	double output = 0;
	double temp = x;

	for (i = 1; i <= n; i++) {
		if (1 == i % 2) {
			output += temp;
			temp *= -1;
		}
		temp *= x / (i+1);
	}
	return output;
}