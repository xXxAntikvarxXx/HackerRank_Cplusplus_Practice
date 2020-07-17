# Input and Output
## Objective
In this challenge, we're practicing reading input from stdin and printing output to stdout.

***

In C++, you can read a single whitespace-separated token of input using [cin](http://www.cplusplus.com/cin), 
and print output to stdout using [cout](http://www.cplusplus.com/printf). 
For example, let's say we declare the following variables:

```c++
string s;
int n;
```
and we want to use cin to read the input "High 5" from stdin. We can do this with the following code:

```c++
cin >> s >> n;
```
The above code reads the first word ("High") from stdin and saves it as string <img src="./img/s.svg">, then reads the second word (<img src="./img/quotes.svg">) from stdin and saves it as integer <img src="./img/n.svg">. If we want to print these values to stdout, we write the following code:

```c++
cout << s << " " << n << endl;
```
The above code prints the contents of string <img src="./img/s.svg">, which is the word "High". Then it prints a single space (<img src="./img/quotes.svg">), followed by the contents of integer <img src="./img/n.svg">. Because we also want to ensure that nothing else is printed on this line, we end our line of output with a newline via [endl](http://www.cplusplus.com/endl). This results in the following output:

```bash
High 5
```
**Task**\
Read <img src="./img/3.svg"> numbers from stdin and print their sum to stdout.

**Note:** If you plan on completing this challenge in C instead of C++, you'll need to use format specifiers with printf and scanf.

**Input Format**

A single line containing <img src="./img/3.svg"> space-separated integers: <img src="./img/a.svg">, <img src="./img/b.svg">, and <img src="./img/c.svg">.

**Constraints**

* <img src="./img/constraints.svg" alt="">

**Output Format**

Print the sum of the three numbers on a single line.

**Sample Input**

```bash
1 2 7
```
**Sample Output**

```bash
10
```
**Explanation**

The sum of the three numbers is <img src="./img/explanation.svg">.