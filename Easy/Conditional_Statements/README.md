# Conditional Statements
## Objective

_if_ and _else_ are two of the most frequently used conditionals in C/C++, 
and they enable you to execute zero or one conditional statement among 
many such dependent conditional statements. We use them in the following 
ways:

1. _if:_ This executes the body of bracketed code starting with 
<img src="./img/statement1.svg"> if <img src="./img/condition.svg"> 
evaluates to _true_.
    ```c++
    if (condition) {
        statement1;
        ...
    }
    ```
2. _if - else:_ This executes the body of bracketed code starting with 
<img src="./img/statement1.svg"> if <img src="./img/condition.svg"> 
evaluates to _true_, or it executes the body of code starting with 
<img src="./img/statement2.svg"> if <img src="./img/condition.svg"> 
evaluates to _false_. Note that only _one_ of the bracketed code 
sections will ever be executed.
    ```c++
    if (condition) {
        statement1;
        ...
    }
    else {
        statement2;
        ...
    }
    ```
3. _if - else if - else:_ In this structure, dependent statements are 
chained together and the <img src="./img/condition.svg"> for each 
statement is only checked if all prior conditions in the chain 
evaluated to _false_. Once a <img src="./img/condition.svg"> evaluates 
to _true_, the bracketed code associated with that statement is executed 
and the program then skips to the end of the chain of statements and 
continues executing. If each <img src="./img/condition.svg"> in the 
chain evaluates to false, then the body of bracketed code in the else 
block at the end is executed.
    ```c++
    if(first condition) {
        ...
    }
    else if(second condition) {
        ...
    }
    .
    .
    .
    else if((n-1)'th condition) {
        ....
    }
    else {
        ...
    }
    ```
***
Given a positive integer denoting <img src="./img/n.svg">, do the following:

* If <img src="./img/1leqnleq9.svg">, then print the lowercase English 
word corresponding to the number (e.g., `one` for <img src="./img/1.svg">, 
`two` for <img src="./img/2.svg">, etc.).
* If <img src="./img/ngt9.svg">, print `Greater than 9`.

**Input Format**

A single integer denoting <img src="./img/n.svg">.

**Constraints**

* <img src="./img/1leqnleq10^9.svg" alt="">

**Output Format**

If <img src="./img/1leqnleq9.svg">, then print the lowercase English word 
corresponding to the number (e.g., `one` for <img src="./img/1.svg">, `two` 
for <img src="./img/2.svg">, etc.); otherwise, print `Greater than 9` instead.

**Sample Input 0**

```bash
5
```

**Sample Output 0**

```bash
five
```

**Explanation 0**

`five` is the English word for the number .

**Sample Input 1**

```bash
8
```

**Sample Output 1**

```bash
eight
```

**Explanation 1**

`eight` is the English word for the number .

**Sample Input 2**

```bash
44
```

**Sample Output 2**

```bash
Greater than 9
```

**Explanation 2**

<img src="./img/neq44.svg" alt=""> is greater than 
<img src="./img/9.svg" alt="">, so we print `Greater than 9`.