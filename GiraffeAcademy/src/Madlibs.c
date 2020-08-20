#include <stdio.h>
#include <stdlib.h>

int main() {
	char color[20];
	char celebrityF[20];
	char celebrityL[20];
	char food[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityF, celebrityL);
	printf("Enter a food: ");
	scanf("%s", food);

	printf("\nMadlibs!\n");
	printf("Roses are %s\n", color);
	printf("%s %s are blue\n", celebrityF, celebrityL);
	printf("I love %s\n", food);

	return 0;
}