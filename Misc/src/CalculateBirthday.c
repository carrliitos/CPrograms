#include <stdio.h>
#include <stdlib.h>
#include "CalculateYear.h"

/*
int calculateYear(int currentYear, int userAge); // function prototypes
*/

int main() {
	int currentYear;
	int userAge;

	printf("Enter the current year: \n");
	scanf("%d", &currentYear);
	printf("Enter your age: \n");
	scanf("%d", &userAge);
	
	printf("You were born in %d \n", calculateYear(currentYear, userAge));

	return 0;
}

/* ---- This function is now on a separate file called "calculateYear.c"
	"calculateYear.h" will contain the function prototype
	and we import "calculateYear.h" with the #include statement

int calculateYear(int currentYear, int userAge) {
	int userBirthYear;
	return userBirthYear = currentYear - userAge;
}
*/