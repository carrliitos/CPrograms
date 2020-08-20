# C programming

### To compile:
<code>$ gcc -o hello hello.c</code>

This command will invoke the GNU C compiler to compile the file hello.c and output (-o) the result to an executable called hello

### To execute:
<code>$ ./hello</code>

### Optional Step:
In order to avoid the ./prefix each time a program is to be executed, insert the following as the last line in the file .profile(located in your home folder):

<code>export PATH=.:$PATH</code>
	
This step needs only to be done once.

<h3>A simpler way to run a program depends on the system you are using.</h3>
If on UNIX system, simply run:

<code>$ cc hello.c</code>

The compilation will proceed, and will make an executable file called `a.out`, that you can run.

<code>$ a.out</code>

### Table of Contents
- [x] Hello world! [[src](./GiraffeAcademy/src/HelloWorld.c)]
- [x] Variables [[src](./GiraffeAcademy/src/Variables.c)]
- [x] Data Types [[src](./GiraffeAcademy/src/DataTypes.c)]
- [x] Printf [[src](./GiraffeAcademy/src/PrintFunction.c)]
- [x] Dealing with Constants [[src](./GiraffeAcademy/src/Constants.c)]
- [x] User input [[src](./GiraffeAcademy/src/UserInput.c)]
- [x] User input (asking for array of char) [[src](./GiraffeAcademy/src/UserInput2.c)]
- [x] Calculator 
	- [x] Basic addition [[src](./GiraffeAcademy/src/Calculator.c)]
	- [x] Fully functional [[src](./GiraffeAcademy/src/Calculator2.c)]
- [x] Mad libs game [[src](./GiraffeAcademy/src/Madlibs.c)]
- [x] Arrays [[src](./GiraffeAcademy/src/Arrays.c)]
- [x] Functions [[src](./GiraffeAcademy/src/Functions.c)]
	- [x] Return statements [[src](./GiraffeAcademy/src/ReturnStatements.c)]
- [x] If-statements using max() [[src](./GiraffeAcademy/src/If_Max.c)]
- [x] Switch statements [[src](./GiraffeAcademy/src/SwitchStatements.c)]

### Things to remember
- Single quotes (' ') can only hold a single character...
```
	char character = 'A';
```
whereas, double quotes (" ") can hold any amount of characters
```
	char string[] = "A string of characters";
```
- Use %lf for scanning floating points, and %f for printing floating points
- Given an int
```
int a;
```
To declare a pointer to an int:
```
int *a;
```
To indicate pointer a ie. address of variable a:
```
&a;
```