#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
	double result = num * num * num;
	return result;
	// return result = num * num * num;
}

int main() {
	// print and call the function
	// we are cubing 3
	printf("The cube of %d is %.2f", 3, cube(3.2));
	return 0;
}