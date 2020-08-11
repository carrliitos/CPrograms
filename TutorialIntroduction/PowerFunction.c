/* This program demonstrates functions in C.
	We create function power(x ,y), which raises an integer x to the positive integer power of y.
	We do this since C has no exponentiation operator like the ** in other languages.
*/

#include <stdio.h>

/* Test our power() function */
main() {

	printf("n, power(2, n), power(-3, n)");
	for(int i = 0; i < 10; ++i) {
		printf("%d, %d, %d\n", i, power(2, i), power(-3 ,i));
	}
	// return value of zero implies a normal termination; non-zero values signal unusual or erroneous termination conditions
	return 0; 
}

int power(int base, int n) {
	int p;

	p = 1;
	for(int i = 0; i < n; ++i) {
		p = p * base;
	}
	return p;
}