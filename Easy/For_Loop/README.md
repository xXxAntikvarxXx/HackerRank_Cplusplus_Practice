# For Loop
## Objective

A _for_ loop is a programming language statement which allows code 
to be repeatedly executed.

The syntax for this is

```c++
for ( <expression_1> ; <expression_2> ; <expression_3> )
    <statement>
```

* _expression_1_ is used for intializing variables which are generally used for controlling terminating flag for the loop.
* _expression_2_ is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
* _expression_3_ is generally used to update the flags/variables.

A sample loop will be

```c++
for(int i = 0; i < 10; i++) {
    ...
}
```

**Input Format**

You will be given two positive integers, <img src="./img/a.svg"> 
and <img src="./img/b.svg"> (<img src="./img/aleqb.svg">), 
separated by a newline.

**Output Format**

For each integer  in the interval <img src="./img/[a,b].svg">:

* If <img src="./img/1leqnleq9.svg">, then print the English 
representation of it in lowercase. That is `one` for <img src="./img/1.svg">, 
`two` for <img src="./img/2.svg">, and so on.
* Else if <img src="./img/ngt9.svg"> and it is an even number, then print `even`.
* Else if <img src="./img/ngt9.svg"> and it is an odd number, then print `odd`.

**Note:** <img src="./img/[a,b]={xinmathbb{Z}aleqxleqb}.svg">

**Sample Input**

```bash
8
11
```

**Sample Output**

```bash
eight
nine
even
odd
```
