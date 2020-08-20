/* Function syntax:
return_type function_name( parameter list ) {
   body of the function
}

Return Type − A function may return a value. The return_type is the data type of the 
	value the function returns. Some functions perform the desired operations
	 without returning a value. In this case, the return_type is the keyword void.
Function Name − This is the actual name of the function. The function name and 
	the parameter list together constitute the function signature.
Parameters − A parameter is like a placeholder. When a function is invoked, you pass a 
	value to the parameter. This value is referred to as actual parameter or argument. 
	The parameter list refers to the type, order, and number of the parameters of a 
	function. Parameters are optional; that is, a function may contain no parameters.
Function Body − The function body contains a collection of statements that define
	what the function does.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	// Call the function
	printf("Top\n");
	sayHi("Benny");
	sayHi("Carly");
	sayHi("Sally");

	return 0;
}

void sayHi(char name[]) {
	printf("Hello %s!!!!!!!\n", name);
}