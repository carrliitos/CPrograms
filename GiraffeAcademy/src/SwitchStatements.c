/* This program will tell you your grades and wil llet you know if you failed or not */

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Create variables
	char grade = "A";

	// Simple switch statement
	switch(grade) {
		case 'A' : 
			printf("You did amazing!\n");
			break;
		case 'B' : 
			printf("You did nice!\n");
			break;
		case 'C' : 
			printf("You did alright!\n");
			break;
		case 'D' : 
			printf("You could do better\n");
			break;
		case 'F' : 
			printf("You failed. Sorry. Go home pls.\n");
			break;
		default:
			printf("invalid grade\n");
	}

	return 0;
}