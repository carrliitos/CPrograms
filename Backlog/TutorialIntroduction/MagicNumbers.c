/* We need to deal with "magic numbers" like 300 and 20, by giving them meaningful names. 
	
	A #define line defines a symbolic name, or symbolic constant, to be a particular
	string of characters:	
	
	#define name replacement
	
	The name is the in the same convention as variable names, and replacement can be any 
	sequence of characters; it is not limited to numbers.
*/

#include <stdio.h>

#define LOWER 0 // lower limit of table
#define UPPER 300 // upper limit
#define STEP 20 // step size

main() {
	int fahr;
	
	char fahren[] = "Fahrenheit";
	char celsius[] = "Celsius";
	printf("%s\t%s\n", fahren, celsius);

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0*(fahr - 32)));
	}
}