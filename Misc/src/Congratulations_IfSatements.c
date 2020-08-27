/* This program congratulates a student if he/she passed */

#include <stdlib.h>
#include <stdio.h>

int main() {
	int grade;

	printf("Enter your grade: ");
	scanf("%d", &grade);

	if(grade >= 60){
		printf("congratulations!!");
	}else {
		printf("You failed. Try again.\n");
	}
	return 0;
}