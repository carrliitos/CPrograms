/* A variation of the temperature converter with for-loop */
#include <stdio.h>

main() {
	int fahr;

	char fahren[] = "Fahrenheit";
	char celsius[] = "Celsius";
	printf("%s\t%s\n", fahren, celsius);

	for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0*(fahr - 32)));
		// %3d = print as decimal integer, at least 3 characters wide
		// %6.1f = print as floating point, at least 6 wide after 2 decimal points
	}
}