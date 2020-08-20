#include <stdlib.h>
#include <stdio.h>

// Get the user to input their age

int main() {
	// Create a variable to store the user input -- specify the array size
	char name[20];
	// Ask for the user input
	printf("Enter your first name: ");
	// scan the user input and store it in "age" variable -- we don't need a pointer
	scanf("%s", name);
	// output results
	printf("Your name is %s.\n", name);

	return 0;
}

/* Problem -- we can only scan the chars up until the space
	If we want to get a line of text from user, we use fgets(). It behaves similar to 
	scanf(), except we can grab a whole line of text. Read documentation for instructions
	on how to use it.
*/