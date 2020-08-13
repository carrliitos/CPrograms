# Table of contents
- [Pointers And Arrays]()

## Pointers and Arrays
- `Pointer`
	- a variable that contains the address of a variable.
	- used a lot in C because they sometimes are the only way to express a computation
	- usually lead to a more compact and efficient code
	- have been lumped with the `goto` statement
		- if used correctly, pointers can achieve clarity and simplicity
	- type `void *` (pointer to void) replaces `char *` as the proper type for a generic pointer

### Pointers and addresses
- A typical machine has an array of consecutively numbered or addressed memory cells that may be maniupualted individually or in contiguous groups
- **A pointer is a group of cells that can hold an address**
- Example:
	
	<code>p = &c;</code>

- This example shows that *we assign the address of **c** to the variable **p**, and **p** is said to "point to" **c***
	- (very similar to how references work in JAVA)
- The unary operator `*` is the *indirection* or *dereferencing* operator
	- when applied to a pointer, it access the object the pointer points to. (Mind. Blown.)
- One example of how to declare a pointer is [here](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/PointersAndArrays/DeclareAPointer.c)
	- `int *ip;` is intended as a mnemonic; it says, "*the expression *ip is an int*"
	- The syntax of the declaration for a variable mimics the syntax of expression in which the variable might appear.
	Similarly, this same syntax is applied to function declarations;
	- `double *dp, atof(char *);`
		- this says that "*an expression `*dp` and `atof(s)` have values of `double`, and that argument of `atof()` is a pointer to `char`*".
- Important note: **Every pointer points to a specific data type**
- More examples:
	
	- `*ip = *ip + 10;`

		- If `ip` points to the integer `x`, then `*ip` can occur in any context where `x` could, so the above code increments `*ip` by 10.
		- The unary operators `*` and `&` bind more tightly than arithmetic operators, so the assignment `y = *ip + 1` takes whatever `ip` points at, adds 1, and assigns the result to `y`, while `*ip += 1` increments what `ip` points to, as do `++*ip` and `(*ip)++`.

### Pointers and Function Arguments