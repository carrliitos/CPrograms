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
- Array positions can be found [here](./ArrayPositions.c)

### Advantages
- Random access
- Easy sorting and iteration
- Replacement of multiple variables

### Disadvantages
- Fixed size
- Difficult to insert and delete
- If capacity is more and occupancy less, most of the array gets wasted
- Need contiguous memory to get allocated

### Applications
- For storing information in linear fashion
- Suitable for applications that requires frequent searching

### Programs
- Demo ([src](./ArrayDemo.c), [out](./outputTXT/ArrayDemo.txt))
- Sieve of Eratosthenes ([src](./SieveOfEratosthenes.c), [out](./outputTXT/SieveOfEratosthenes.txt))
	- Uses an array consisting of the very simplest type of elements
	- The sieve of Eratosthenes is typical of algorithms that exploit the fact that any item of an array can be efficiently accessed
	- Each items are also sequentially accessed
	- if the index is known, any element can be accessed in O(1) time.