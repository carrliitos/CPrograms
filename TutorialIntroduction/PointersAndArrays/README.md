# Pointers and Arrays
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
- One example of how to declare a pointer is [here]()