#include <stdio.h>
#include <stdlib.h>

// Constants = values that are unmodifiable

/* They can also be defined with symbolic constants 
	A #define line defines a symbolic name or symbolic constant to be a particular string of characters
	Syntax:
		#define name replacement_text
*/

#define HELLO "hello"
#define WORLD "world"
#define THIS "This"
#define IS "is"
#define USING "using"
#define SYMBOLIC "symbolic"
#define CONSTANTS "constants"

int main() {
	const int num = 5;
	printf("%d is a constant.\n", num);

	printf("%s, %s!\n", HELLO, WORLD);
	printf("%s %s %s %s %s!\n", THIS, IS, USING, SYMBOLIC, CONSTANTS);

	return 0;
}