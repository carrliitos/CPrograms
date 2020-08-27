#include <stdio.h>
#include <stdlib.h>

int main() {
	double grade1, grade2, grade3;
	double averageGrade;

	printf("Enter grade 1: ");
	scanf("%lf", &grade1); // &grade1 = "pleace it in the address where grade 1 resides"
	printf("Enter grade 2: ");
	scanf("%lf", &grade2);
	printf("Enter grade 3: ");
	scanf("%lf", &grade3);

	averageGrade = (grade1 + grade2 + grade3) / 3.0;

	printf("Average grade: %.2lf\n", averageGrade);
	return 0;
}