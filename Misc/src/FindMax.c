/* This program finds the largest number between 2 numbers */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1;
	int num2;

	printf("Enter your first number: ");
	scanf("%d", &num1);
	printf("Enter your second number: ");
	scanf("%d", &num2);

	if(num1 > num2) {
		printf("The largest of the two is: %d\n", num1);
	}else if(num2 > num1){
		printf("The largest of the two is: %d\n", num2);
	}else {
		printf("Both numbers are equal.\n");
	}
	return 0;
}