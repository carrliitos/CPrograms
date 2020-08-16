/* When an array name is passed to a function, the location of the initial element is passed.
	Within the called function, this argument is a local variable, and so anarray name parameter is 
	a pointer, that is, a variable containing an address.
*/

#include <stdio.h>
#include <string.h>

/* strlen(): returns the length of the string s */
int srlen(char *s) {
	int n;
	for(n = 0; *s != "\0"; s++) {
		n++;
	}
	return n;
}

int main() {
	strlen("Hello, world"); // String constant
	// strlen(array); 
	// strlen(ptr);

	// all of these calls will work
	return 0;
}