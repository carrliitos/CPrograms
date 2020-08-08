/* The model of I/O supported by the standard library is very simple.
	Text I/O, regardless of where it originates or goes to, is dealt with as streams
	of characters. A text stream is a sequence of characters divided into lines; each
	line consists of zero or more characters followed by a newline character.

	c = getchar(); // reads the NEXT input character
	putchar(c); // prints a character each time it is called.
	the variable c contains the next character of input.
*/

#include <stdio.h>
// Copy input to output; 1st version
main() {
	int c;
	// read a character
	c = getchar();
	while((c = getchar()) != EOF) { // testing of the character is inside the while loop
		putchar(c);
	}
}

/* This version centralizes the input - there is now only one reference to getchar - and 
	shrinks the program.
	The resulting program is more compact, and is easier to read.
	** IMPORTANT: **
		Precedence of != is higher than that of =, therfore, in the absence of the parenthesis
		inside the condition, the relational test != would be done before the assignment operator.
*/