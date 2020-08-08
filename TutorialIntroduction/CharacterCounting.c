/* Counting characters in input; similar to the CharacterData.c program */
#include <stdio.h>

main() {
	long nc = 0; // long ints are atleast 32 bits long
	while(getchar() != EOF) {
		++nc;
	}
	printf("%ld\n", nc);
	// %ld = conversion specification; tells printf() that the corresponding argument
	// is a long integer
}