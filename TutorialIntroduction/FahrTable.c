#include <stdio.h>
/* The following program uses the formula °C = (5/9)(°F-32) to print the following
	table of Fahrenheit temperatures and their centigrade or Celsiu equivalent:
	1		-17
	20		-6
	40		4
	60		15
	80		26
	100		37
	120		48
	140		60
	160		71
	180		82
	200		93
	220		104
	240		115
	260		126
	280		137
	300		148
*/

main() {
	// variables
	int fahr, celsius;
	int lower, upper, step;

	// Assignment statements (initializing our variables)
	lower = 0; // lower limit of temperature scale
	upper = 300; // upper limit
	step = 20; // step size

	fahr = lower;
	// Add a heading
	printf("Fahrenheit\tCelsius\n");
	while(fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9; // O(1)
		printf("%d\t\t%d\n", fahr, celsius); // O(1)
		fahr = fahr + step; // O(1)
	}
}