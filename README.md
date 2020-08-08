# C programming practice

## To compile:
<code>$ gcc -o hello hello.c</code>

This command will invoke the GNU C compiler to compile the file hello.c and output (-o) the result to an executable called hello

## To execute:
<code>$ ./hello</code>

## Optional Step:
In order to avoid the ./prefix each time a program is to be executed, insert the following as the last line in the file .profile(located in your home folder):

<code>export PATH=.:$PATH</code>
	
This step needs only to be done once.

<h3>A simpler way to run a program depends on the system you are using.</h3>
If on UNIX system, simply run:

<code>$ cc hello.c</code>

The compilation will proceed, and will make an executable file called `a.out`, that you can run.

<code>$ a.out</code>

# Table of contents
- [ ] Chapter 1
	- [x] Getting Started
		- [x] [How to compile and execute a program](https://github.com/carrliitos/CPrograms#c-programming-practice)
		- [x] [Hello world!](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/hello.c)
	- [x] Variables and Arithmetic Expressions
		- [x] [Print Fahrenheit-Celsius table with while-loop](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/FahrTable.c)
		- [x] [Print Fahrenheit-Celsius table with while-loop in reverse order](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/FahrTable_ReverseOrder.c)
	- [x] The `for` statement
		- [x] [Print Fahrenheit-Celsius table with for-loop](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/FahrTable_ForLoop.c)
	- [x] Symbolic Constants
		- [x] [Magic numbers for Fahren-Celsius program](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/MagicNumbers.c)
	- [x] Character Input and Output
		- [x] File Copying
			- [x] [Copy input to output version 1](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/MagicNumbers.c)
			- [x] [Copy input to output version 2](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/CharacterData_Vers2.c)
		- [x] Character Counting
			- [x] [Counting characters in input version 1](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/CharacterCounting.c)
			- [x] [Counting characters in input version 2](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/CharacterCounting_Vers2.c)
		- [x] [Line Counting](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/LineCounting.c)
		- [x] [Word Counting](https://github.com/carrliitos/CPrograms/blob/master/TutorialIntroduction/WordCounting.c)
	- [ ] Arrays
	- [ ] Functions
	- [ ] Arguments - Call by Value
	- [ ] Character Arrays
	- [ ] External Variables and Scope
- [ ] Chapter 2

## [Textbook (e-book version)](http://www2.cs.uregina.ca/~hilder/cs833/Other%20Reference%20Materials/The%20C%20Programming%20Language.pdf)