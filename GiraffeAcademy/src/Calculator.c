#include <stdio.h>
#include <stdlib.h>

int main() {
	double num1;
	double num2;

	printf("We're adding your two favorite numbers.\n");

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);

	printf("Answer: %.2f\n", num1 + num2); // %.2f for two decimal places

	return 0;
}

/* Use %lf for scanning floating points, and %f for printing floating points */