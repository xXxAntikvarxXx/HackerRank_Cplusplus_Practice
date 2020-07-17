# Basic Data Types
## Objective
Some C++ data types, their format specifiers, and their most common 
bit widths are as follows:

* _Int ("%d"):_ 32 Bit integer
* _Long ("%ld"):_ 64 bit integer
* _Char ("%c"):_ Character type
* _Float ("%f"):_ 32 bit real value
* _Double ("%lf"):_ 64 bit real value
***
**Reading**\
To read a data type, use the following syntax:

```c++
scanf("`format_specifier`", &val)
```
For example, to read a _character_ followed by a _double_:
```c++
char ch;
double d;
scanf("%c %lf", &ch, &d);
```
For the moment, we can ignore the spacing between format specifiers.
***
**Printing**\
To print a data type, use the following syntax:
```c++
printf("`format_specifier`", val)
```
For example, to print a _character_ followed by a _double_:
```c++
char ch = 'd';
double d = 234.432;
printf("%c %lf", ch, d);
```
**Note:** You can also use cin and cout instead of scanf and printf; 
however, if you are taking a million numbers as input and printing a 
million lines, it is faster to use scanf and printf.

**Input Format**

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

**Output Format**

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

**Sample Input**

```bash
3 12345678912345 a 334.23 14049.30493
```

**Sample Output**

```bash
3
12345678912345
a
334.230
14049.304930000
```

**Explanation**

Print _int_ <img src="./img/3.svg">,\
followed by _long_ <img src="./img/12345678912345.svg">,\
followed by _char_ <img src="./img/a.svg">,\
followed by _float_ <img src="./img/334.230.svg">,\
followed by _double_ <img src="./img/14049.304930000.svg">.