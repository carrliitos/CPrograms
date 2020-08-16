/* to illustrate address arithmetic */

#define ALLOCSIZE 10000 // Size of available space

static char allocbuf[ALLOCSIZE]; // Storage for alloc
/* Define allocp to be a character pointer and initialize it 
	to point to the beginning of allocbuf, which is the next
	free position.
*/
static char *allocp = allocbuf; // Next free position

char *alloc(int n) { // return pointer to n characters
	/* Check if there's enough room to satisfy a request for n characters */
	if(allocbuf + ALLOCSIZE - allocp >= n) { // it fits
		allocp += n;
		return allocp - n; // old p
	}else { // not enough room
		return 0;
	}
}

void afree(char *p) { // free storage pointed to by p
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE) {
		allocp = p;
	}
}

int main() {
	return 0;
}