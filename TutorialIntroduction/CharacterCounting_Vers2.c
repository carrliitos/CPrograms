/* Counting characters in input version 2; similar to the CharacterData.c program */
#include <stdio.h>

main() {
	double nc;
	for (nc = 0; getchar() != EOF; ++nc){
		; // null statement to satisfy the requirement
	}
	printf("%.0f\n", nc);
	// printf uses %f for both float and double; %.0f suppresses the printing of decimal
	// point and the fraction part, which is zero
}