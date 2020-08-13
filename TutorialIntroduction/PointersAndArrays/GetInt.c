/*This is our version of getint() that returns EOF for end of file,
	zero if the next input is not a number,
	and a positive value if the input contains a valid number.
*/

#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);

/* getint: get next integer from input to *pn */
int getint(int *pn) {
	int c, sign;

	while(isspace(c = getch())) // skip white space
		;
	if(!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); // it is not a number
		return 0;
	}

	sign = (c == '-') ? -1 : 1; // IDK what ? and : operators are for yet
	
	if(c == '+' || c == '-') {
		c = getch();
	}

	for(*pn = 0; isdigit(c); c = getch()) {
		*pn = 10 * *pn + (c - '0');
	}
	*pn *= sign;

	if(c != EOF) {
		ungetch(c);
	}
	return c;
}