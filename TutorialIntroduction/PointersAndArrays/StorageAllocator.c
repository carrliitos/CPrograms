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
		/* The new value of allocp would be at mos one beyond the end of allocbuf */
		allocp += n;
		/* return a pointer to the beginning of the block of characters */
		return allocp - n; // old p
	}else { // not enough room
		/* return a zero to signal an abnormal event */
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