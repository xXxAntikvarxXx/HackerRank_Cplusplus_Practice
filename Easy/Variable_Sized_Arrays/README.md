# Variable Sized Arrays
## Objective

Consider an <img src="./img/n.svg">-element array, <img src="./img/a.svg">, where each index 
<img src="./img/i.svg"> in the array contains a reference to an array of <img src="./img/k{_{i}}.svg"> 
integers (where the value of <img src="./img/k{_{i}}.svg"> varies from array to array). See the 
_Explanation_ section below for a diagram.

Given <img src="./img/a.svg">, you must answer <img src="./img/q.svg"> queries. Each query is in 
the format `i j`, where <img src="./img/i.svg"> denotes an index in array <img src="./img/a.svg"> 
and <img src="./img/j.svg"> denotes an index in the array located at <img src="./img/a[i].svg">. 
For each query, find and print the value of element <img src="./img/j.svg"> in the array at 
location <img src="./img/a[i].svg"> on a new line.

Click [here](http://www.cplusplus.com/reference/vector/vector/) to know more about how to create 
variable sized arrays in C++.

**Input Format**

The first line contains two space-separated integers denoting the respective values 
of <img src="./img/n.svg"> (the number of variable-length arrays) and <img src="./img/q.svg"> 
(the number of queries).
Each line <img src="./img/i.svg"> of the <img src="./img/n.svg"> subsequent lines contains a 
space-separated sequence in the format <img src="./img/ka[i]{_{0}}a[i]{_{1}}cdotsa[i]{_{k-1}}.svg"> 
describing the <img src="./img/k.svg">-element array located at <img src="./img/a[i].svg">.
Each of the <img src="./img/q.svg"> subsequent lines contains two space-separated integers 
describing the respective values of <img src="./img/i.svg"> (an index in array <img src="./img/a.svg">) 
and <img src="./img/j.svg"> (an index in the array referenced by <img src="./img/a[i].svg">) for a query.

**Constraints**

* <img src="./img/1leqnleq10^{5}.svg" alt="">
* <img src="./img/1leqqleq10^{5}.svg" alt="">
* <img src="./img/1leqforallkleq3cdot10^{5}.svg" alt="">
* <img src="./img/nleqsumkleq3cdot10^{5}.svg" alt="">
* <img src="./img/0leqforalli<n.svg" alt="">
* <img src="./img/0leqforallj<k.svg" alt="">
* All indices in this challenge are zero-based.
* All the given numbers are non negative and are not greater than <img src="./img/10^{6}.svg">

**Output Format**

For each pair of <img src="./img/i.svg"> and <img src="./img/j.svg"> values (i.e., for each query), 
print a single integer denoting the element located at index <img src="./img/j.svg"> of the array 
referenced by <img src="./img/a[i].svg">. There should be a total of <img src="./img/q.svg"> lines of output.

**Sample Input**

```bash
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
```

**Sample Output**

```bash
5
9
```

**Explanation**

The diagram below depicts our assembled Sample Input:

<img src="./img/variable-length-arrays.png" alt="">

We perform the following <img src="./img/q=2.svg"> queries:

1. Find the array located at index <img src="./img/i=0.svg">, which corresponds to 
<img src="./img/a[0]=[1,5,4].svg">. We must print the value at index <img src="./img/j=1.svg"> 
of this array which, as you can see, is <img src="./img/5.svg">.
2. Find the array located at index <img src="./img/i=1.svg">, which corresponds to 
<img src="./img/a[1]=[1,2,8,9,3].svg">. We must print the value at index <img src="./img/j=3.svg"> 
of this array which, as you can see, is <img src="./img/9.svg">.
