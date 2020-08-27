/* This program reads a value from a user, and checks whether or not the given
	number is even or odd.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;

	printf("Enter your number: ");
	scanf("%d", &num);

	if((num % 2) == 0) {
		printf("%d is even!\n", num);
	}else {
		printf("%d is odd!\n", num);
	}

	return 0;
}