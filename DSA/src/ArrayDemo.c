#include <stdio.h>

int main() {
	// Array declaration
	int rollNo[10];

	// taking inputs
	for(int i = 0; i < 10; i++) {
		scanf("%d", &rollNo[i]); // & = initialize each i with values given from scan
	}

	// printing outputs
	for(int i = 0; i < 10; i++) {
		printf("%d ", rollNo[i]);
	}

	return 0;
}