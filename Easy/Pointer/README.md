# Pointer
## Objective

A [pointer](http://en.wikipedia.org/wiki/Pointer_%28computer_programming%29) in C is a way to share 
a memory address among different contexts (primarily functions). They are primarily used whenever 
a function needs to modify the content of a variable, of which it doesn't have ownership.

In order to access the memory address of a variable, <img src="./img/val.svg">, we need to 
prepend it with <img src="./img/&.svg"> sign. E.g., `&val` returns the memory address of 
<img src="./img/val.svg">.

This memory address is assigned to a pointer and can be shared among various functions. 
E.g. <img src="./img/{int}^{*}p=&val.svg"> will assign the memory address of <img src="./img/val.svg"> 
to pointer <img src="./img/p.svg">. To access the content of the memory to which the pointer 
points, prepend it with a `*`. For example, `*p` will return the value reflected by <img src="./img/val.svg"> 
and any modification to it will be reflected at the source (<img src="./img/val.svg">).

```c++
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
```

You have to complete the function _void update(int *a,int *b)_, which reads two integers as argument, 
and sets <img src="./img/a.svg"> with the sum of them, and <img src="./img/b.svg"> with the absolute 
difference of them.

* <img src="./img/a{}'=a+b.svg" alt="">
* <img src="./img/b{}'=lefta-bright.svg" alt="">

**Input Format**

Input will contain two integers, <img src="./img/a.svg"> and <img src="./img/b.svg">, separated by 
a newline.

**Output Format**

You have to print the updated value of <img src="./img/a.svg"> and <img src="./img/b.svg">, on two 
different lines.

_P.S.:_ Input/ouput will be automatically handled. You only have to complete the 
_void update(int *a,int *b)_ function.

**Sample Input**

```bash
4
5
```

**Sample Output**

```bash
9
1
```

**Explanation**

* <img src="./img/a{}'=4+5=9.svg" alt="">
* <img src="./img/b{}'=left4-5right=1.svg" alt="">
