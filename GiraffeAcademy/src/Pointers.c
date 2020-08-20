/* Pointers are memory addresses and memory addresses can be thought of simply as an array
	or bytes. In this array, every memory location has its own address, and memory addresses
	act just like the indexes of a normal array. 
	The line:
		p = &i;
	means that p contains the address i.
	And this line:
		int *p;
	tells the compiler to print the value that p points to. However, p have not been initialized
	yet. Uninitialized pointers are bad and causes segmentation faults.
	Given this program:
		int main() {
			int i;
			int *p; // a pointer to an integer
			p = &i;
			*p = 5;
			printf("%d %d\n", i, *p);
			return 0;
		}
	The pointer p holds the address of i once p = &i; is executed. The variables *p and i 
	are therefore equivalent. The pointer p literally holds the address of i when we say:
		printf("%d", p);
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	/* We have an integer variable (age), and this integer variable is storing an integer value
		of 30.
	*/
	int age = 30;

	/* We have a double variable (gpa), and this double variable is storing an double value
		of 4.0.
	*/
	double gpa = 4.0;
	
	/* We have char variable (grade), and this char variable is storing an char value
		of 30.
	*/
	char grade = 'A';

	/* We can also have a pointer variable (*pointer), we need a physical memory address,
		and this pointer will store the memory address of, say age, in this pointer variable.
	*/
	int *pAge = &age;
	double *pGPA = &gpa;
	char *pGrade = &grade;

	/* &variable gives me the physical address in memory, where the 30 value is stored. */
	printf("age's memory address: %p\n", &age);

	return 0;
}