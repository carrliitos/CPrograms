#include <stdio.h>
#include <stdlib.h>

int main() {
	// declare variables
	double num1;
	double num2;
	char operator;
	// print a prompt
	printf("Enter your first number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &operator);	
	printf("Enter your second number: ");
	scanf("%lf", &num2);

	if(operator == '+') {
		printf("%.2f\n", num1 + num2);
	}else if(operator == '-') {
		printf("%.2f\n", num1 - num2);
	}else if(operator == '/') {
		printf("%.2f\n", num1 / num2);
	}else if(operator == '*') {
		printf("%.2f\n", num1 * num2);
	}else {
		printf("Invalid operator!");
	}

	return 0;
}