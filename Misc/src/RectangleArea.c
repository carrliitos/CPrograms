#include <stdio.h>
#include <stdlib.h>

int main() {
	double height, width;

	printf("Give your rectangle's height: ");
	scanf("%lf", &height);
	printf("Give your rectangle's width: ");
	scanf("%lf", &width);

	double totalArea = width * height;

	printf("Total area of your rectangle is: %.2lf\n", totalArea);

	return 0;
}