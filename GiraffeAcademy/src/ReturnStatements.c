#include <stdio.h>
#include <stdlib.h>

/* Function prototype
	return_type function_name( argument list )
*/

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

/* The structure of our functions are important.
	- We need to create our function first before we call them.
	- If we want to keep our main() above, we would need to prototype the created
	functions needed for the main() method to run
	- protoype syntax:
		return_type function_name( argument list )
	- And these needs to be declared at the top level
*/