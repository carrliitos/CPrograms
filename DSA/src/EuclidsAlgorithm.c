/* Problem: Reduve a given fraction to its lowest terms.

	Solving this problem is equivalent to finding the greatest
	common divisor (GCD). 
	A fraction is reduced to lowest terms by dividing both numerator
	 and denominator by their greatest common divisor.
	We use Euclid's method to solve it, and is based on the fact the if
	 u is greater than v, then the greates common divisor of u and v is the
	 same as the greatest common common divisor of v and u - v.
*/

#include <stdio.h>
int gcd(int u, int v) {
	// create a temporary variable
	int t;
	// Ensure that u >= v by exchanging them
	while(u > 0) {
		if(u < v) {
			t = u;
			u = v;
			v = t;
		}
	}
	return v;
}

main() {
	int x, y;
	/* scanf reads a line from the input and assigns the values found
		to the variables given as arguments. Also, scanf refers to its
		arguments "indirectly" -- pointers */
	while(scanf("%d %d", &x, &y) != EOF) { // set EOF to true when theres no more input
		if(x > 0 && y > 0) {
			printf("%d %d %d\n", x, y, gcd(x, y));
		}
	}
}