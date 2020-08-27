/* This program takes 2 numbers from user, and prints the min number and max number */

#include <stdio.h>
#include <stdlib.h>

int main() {
	float num1, num2;

	printf("Enter your first number: ");
	scanf("%f", &num1);
	printf("Enter your second number: ");
	scanf("%f", &num2);

	if(num1 > num2) {
		printf("Max is %.2f\nMin is %.2f\n", num1, num2);
	}else if(num2 > num1) {
		printf("Max is %.2f\nMin is %.2f\n", num2, num1);
	}else {
		printf("Both given numbers are equal.");
	}

	return 0;
}