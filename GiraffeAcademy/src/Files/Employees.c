/* FILE is a C library function.
	Syntax:
		FILE *fopen(const char *filename, const char *mode)
	filename − This is the C string containing the name of the file to be opened.
	mode − This is the C string containing a file access mode. It includes −
		"r" = opens a file for READING, the file must exists.
		"w" = creates an empty file for WRITING.
		"a" = APPENDS to a file.
		"r+" = Opens a file to update both READING and WRITING. The file must exist.
		"w+" = Creates an empty file for both READING and WRITING.
		"a+" = Opens a file for READING and APPENDING.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Create a file
	/*
	FILE *filePointer = fopen("/home/carlitos/Documents/School/git/CPrograms/GiraffeAcademy/out/Files/employees.txt", "w");
	fprintf(filePointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting\n");
	*/

	// Appending to a file
	/*
	FILE *filePointer = fopen("/home/carlitos/Documents/School/git/CPrograms/GiraffeAcademy/out/Files/employees.txt", "a");
	fprintf(filePointer, "Appended lines below:\nKelly, Customer Service\nMichael, Manager\n");
	*/

	// Reading information from a file
	char line[255];
	FILE *filePointer = fopen("/home/carlitos/Documents/School/git/CPrograms/GiraffeAcademy/out/Files/employees.txt", "r");
	// Reading lines one at a time with fgets()
	fgets(line, 255, filePointer);
	// read the first line
	printf("Reading the first line:\n%s\n", line);
	// read the second line
	fgets(line, 255, filePointer);
	printf("Reading the second line:\n%s\n", line);

	// close the file
	fclose(filePointer);

	return 0;
}