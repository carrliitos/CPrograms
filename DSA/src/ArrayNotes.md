# Arrays
- The most fundamental *primitive* data structure
- A fixed number of data items that are stored **contiguously** and that are accessible by an index (0-based index).
- The size of the array **must be known** beforehand
	- it is possible to dynamically declare the size of the array at execution time, but it is a fundamental property of arrays that their sizes are fixed and must be known before they are used.
- We could (and should) think of computer memory as an array, with the memory addresses corresponding to array indices.
- Another way to structure information is by the used of multi-dimensional arrays.
- Linear Data Structure
- Syntax:
```
/* Array declaration */
DataType var_name[size];
/* Declaration and initialization at the same time */
DataType var_name[] = {element1, element2, element3, element4};
```