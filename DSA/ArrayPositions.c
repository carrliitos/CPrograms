/* Program to find out the positions of arrays */

#include <stdio.h>

main() {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int firstIndex = 0;
	int lastIndex = 9;
	int sizeOfArray = sizeof(arr);
	int rightMostValue = arr[lastIndex];
	int leftMostValue = arr[0];

	printf("Array: ");
	int i = 0;
	for(i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("First Index: %d\nLast Index: %d\n", firstIndex, lastIndex);
	printf("Right most value: %d\nLeft most Value: %d\n", rightMostValue, leftMostValue);
	return 0;
}