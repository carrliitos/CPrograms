#include <stdio.h>
#include <stdlib.h>

/* This program figures out if num1 > num2 using if-statements s*/

int max(int num1, int num2);

int main() {
	printf("Between %d and %d, the largest is: %d", 4, 10, max(4, 10));

	return 0;
}

int max(int num1, int num2) {
	int result;
	if(num1 > num2) {
		result = num1;
	}else {
		result = num2;
	}
	return result;
}