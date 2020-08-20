/* When you want to access the data/value in the memory that the pointer points 
	to - the contents of the address with that numerical index - then 
	you dereference the pointer.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int age = 30;
	int *pAge = &age;

	printf("Original value of variable age: %d\n", age);

	printf("Pointer memory address: %p\n", pAge);
	printf("Dereferenced pointer: %d\n", *pAge); // it gives us the value of the stored variable

	return 0;
}