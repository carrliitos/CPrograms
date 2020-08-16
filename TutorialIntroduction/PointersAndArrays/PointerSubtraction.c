/* Another version of strlen() */

#include <stdio.h>

int strlen(char *s) {
	// point to the first character of the string
	char *p = s;
	// examine each character in turn until the '\0' at the end is seen
	while(*p != "\0") {
		// advance to the next character
		p++;
	}
	// give the string length
	return p - s;
}

int main() {
	return 0;
}