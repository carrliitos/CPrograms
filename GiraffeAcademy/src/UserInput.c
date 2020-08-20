#include <stdlib.h>
#include <stdio.h>

// Get the user to input their age

int main() {
	// Create a variable to store the user input
	int age;
	// Ask for the user input
	printf("Enter your age: ");
	// scan the user input and store it in "age" variable
	scanf("%d", &age);
	// output results
	printf("You are %d years old.\n", age);

	return 0;
}