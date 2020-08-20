/*the swap function where the parameters are declared as pointers,
	and the operands are accessed indirectly through them.
*/

#include <stdio.h>

main() {
	int a = 10;
	int b = 11;
	printf("Value of a: %d\nValue of b: %d\n\n", a, b);
	swap(&a, &b);
}

void swap(int *px, int *py) { // interchange *px and *py
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
	printf("Temp: %d\n*px: %d\n*py: %d\n", temp, *px, *py);
}
