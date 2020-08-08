/* Temperature converter in reverse order */
#include <stdio.h>

main() {
	// variables
	int fahr, celsius;
	int lower, upper, step;

	// Assignment statements (initializing our variables)
	lower = 300; // lower limit of temperature scale
	upper = 0; // upper limit
	step = 20; // step size

	fahr = lower;
	// Add a heading
	printf("Fahrenheit\tCelsius\n");
	while(fahr >= upper) {
		celsius = 5 * (fahr - 32) / 9; // O(1)
		printf("%d\t\t%d\n", fahr, celsius); // O(1)
		fahr = fahr - step; // O(1)
	}
}