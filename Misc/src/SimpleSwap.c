/* This program demonstrates a simple swap using a third variable*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int temp; // temporary variable for swapping

	printf("Before swap\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("temp = %d\n", temp);
	
	printf("Swapping...\n");
	temp = a;
	a = b;
	b = temp;

	printf("After swap\n");	
	printf("a = %d\n", a);
}