#include <stdio.h>
#include <stdlib.h>

int main() {
	char boyName[] = "Carlitos";
	int boyAge = 23;
	char girlName[] = "Teresa";
	int girlAge = 100;

	printf("There once was boy named %s.\n", boyName);
	printf("He was %d years old.\n", boyAge);
	printf("He was in love with %s.\n", girlName);
	printf("But he died, and she lived to be %d.\n", girlAge);
	return 0;
}