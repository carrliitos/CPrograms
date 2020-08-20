/* Structs are similar to classes with a few differences. (See README notes)
	Structures are used to represent a record.
	
	Syntax:
		struct [structure tag] {

			member definition;
			member definition;
			...
			member definition;
		} [one or more structure variables];
	
	Example, we are working with Book structure:
		struct Books {
			char title[50];
			char author[50];
			char subject[50];
			int book_id;
		} book;	// we don't need to declare this
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main() {
	struct Student student1; // struct [structure tag] structure_variable
	strcpy(student1.name, "Carlitos"); // strcpy() takes in a string and give it a value we specify 
	strcpy(student1.major, "Computer Science");
	student1.age = 23;
	student1.gpa = 4.0;

	printf("Name: %s\nMajor: %s\nGPA: %.2f\n", student1.name, student1.major, student1.gpa);

	return 0;
}