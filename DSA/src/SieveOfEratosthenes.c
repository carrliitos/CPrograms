/* Print out all the prime numbers less than 1000 
	
	Goal: to set a[i] to 1 if i is prime, 0 if it is not
	It does so by, for each i, setting the array element corresponding to each
	multiple of i to 0.
	Then it goes through the array one more time, printing out the primes.

	The sieve of Eratosthenes is typical of algorithms that exploit the fact that
	any item of an array can be efficiently accessed.
	The algorithm also accesses the items of the array sequentially, one after
	the other.

	If the index is known, any item can be accessed in constant time.
*/

#include <stdio.h>

#define N 1000

main() {
	// initialize the variables and array
	int i, j, a[N + 1];
	for(a[1] = 0, i = 2; i <= N; i++) {
		a[i] = 1;
	}
	for(i = 2; i <= N/2; i++){
		for(j = 2; j <= N/i; j++){
			a[i * j] = 0;
		}
	}
	for(i = 1; i <= N; i++){
		if(a[i]) {
			printf("%4d", i);
		}
	}
	printf("\n");
}