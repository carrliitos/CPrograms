/* Counting the number of occurrences of each digit, white spaces, or any other characters.
	For this, we'll use Arrays.

	This particular program relies on the properties of the character representation of the digits.
*/

#include <stdio.h>

main() {
	int c, nwhite, nother;
	int ndigit[10]; // Array declaration with size 10

	nwhite = nother = 0;
	for(int i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if(c >= "0" && c <= "9") { // Determines whether the character is in c or not
			++ndigit[c-'0']; // This is only true if the "0", "1", ..., "9" have consecutive increasing values
		}else if(c == " " || c == "\n" || c == "\t") {
			++nwhite;
		}else {
			++nother;
		}
	}

	printf("digits = ");
	for(int i = 0; i < 10; ++i) {
		printf(" %d", ndigit[i]);
	}
	printf(", white space = %d, other = %d\n", nwhite, nother);
}