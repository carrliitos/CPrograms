#include <stdio.h>
#include <stdlib.h>

int main() {
	int currentYear;
	int userAge;

	printf("Enter the current year: \n");
	scanf("%d", &currentYear);
	printf("Enter your age: \n");
	scanf("%d", &userAge);

	int userBirthYear = currentYear - userAge;
	
	printf("You were born in %d \n", userBirthYear);

	return 0;
}