# Arrays Introduction
## Objective

An array is a series of elements of the same type placed in contiguous memory locations that 
can be individually referenced by adding an index to a unique identifier.

Declaration:

```c++
int arr[10]; //Declares an array named arr of size 10, i.e; you can store 10 integers.
```

Accessing elements of an array:

```text
Indexing in arrays starts from 0.
So the first element is stored at arr[0], the second element at arr[1]...arr[9]
```
You'll be given an array of <img src="./img/N.svg"> integers and you have to print the integers in the reverse order.

**Input Format**

The first line of the input contains <img src="./img/N.svg">, where <img src="./img/N.svg"> 
is the number of integers. The next line contains <img src="./img/N.svg"> integers separated by a space.

**Constraints**

* <img src="./img/1leqNleq1000.svg" alt="">
* <img src="./img/1leqA{_{i}}leq10000.svg" alt="">, where <img src="./img/A{_{i}}.svg"> is the 
<img src="./img/i^{th}.svg"> integer in the array.

**Output Format**

Print the <img src="./img/N.svg"> integers of the array in the reverse order in a single line 
separated by a space.

**Sample Input**

```bash
4
1 4 3 2
```

**Sample Output**

```bash
2 3 4 1
```
