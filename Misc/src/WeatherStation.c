/* This program gets from the user a temperature in degree celsius, and converts
	it to degrees fahrenheit
	
	T(F) = T(C) * 1.8 + 32
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	double degreeCelsius;
	double degreeFahrenheit;
	double kelvin;

	printf("Enter your degree in celsius: ");
	scanf("%lf", &degreeCelsius);

	degreeFahrenheit = degreeCelsius * 1.8 + 32.0;
	kelvin = degreeCelsius + 273.15;

	printf("%.2lf degrees celsius = %.2lf degrees fahrenheit = %.2lf Kelvins\n", degreeCelsius, degreeFahrenheit, kelvin);
	return 0;
}