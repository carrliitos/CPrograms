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
	// while(character is not end-of-file indicator)
	while(c != EOF) { // EOF is an integer defined in <stdio.h>
		// output the character just read
		putchar(c);
		// read a character
		c = getchar();
	}
}