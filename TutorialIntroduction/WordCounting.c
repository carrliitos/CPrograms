/* This program is the bare-bones version of the UNIX program wc */

#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

main() {
	// variable state records whether the program is currently in a word or not
	int c, nl, nw, nc, state;
	state = OUT; // initially not in a word
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		++nc;
		if(c == "\n") {
			++nl;
		}
		if(c == " " || c == "\n" || c == "\t") {
			state = OUT;
		}else if(state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}

/* Everytime the program encounters the first character of a word, it counts
	one more word.
*/