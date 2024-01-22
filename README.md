# CPE 390 Introduction to Microprocessors
---
### Lab 1 
[Instructions](https://docs.google.com/document/d/1oPngqp0FCqxsq4ot5StpIl1qULJ6FDt_MJPUhfIz7Do/edit?usp=sharing)

Write a program that prints your name, compiles and run it on the command line. Note that g++ command line examples are in an appendix at the end of the course notes.
Write a program that reads in 2 numbers from standard input and goes in a loop, printing all those numbers on a single line. For example, given the input:
2 5
the output should be:
2 3 4 5
You can use cin to read in from the keyboard:
int start, end;
cin >> start >> end;
Write a program to read in an integer the size of the multiplication table and print out the table. For example, given input 5:
the output should be:
1 2 3 4	5 i
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15	20 25
j

---
### Lab 2 
[Instructions](https://docs.google.com/document/d/18pK74-B_NphYGGh554cBMsCf-L3W0d1yoSm5B0431CQ/edit?usp=sharing)
Integer Problems
int gcd(a,b);
return the greatest common divisor of a and b. For example gcd(12,18) = 6, gcd(15,13)=1
Tem = 13 15/13 -> 13- - -> 15 / 12 -> 12 -- ….

bool isPrime(a)
 return true if the positive integer a is prime,
 false otherwise.

Hint: if we want to check A is a prime or not, we need to check A mod i equals to 0 or not, where i is from 2 to A - 1

For example: to determine whether 5 is prime:
 5 % 2 !=0, 5%3 != 0, 5%4 !=0, 5 is prime

To determine whether 4 is prime: 4 %2 == 0, 4 is not prime
int countPrimes(a,b)
return the number of primes found between a and b inclusive

You may use isPrime function written above to determine whether each number is prime
void collatz(n)
The 3n+1 conjecture

if n is odd, multiply by 3 and add 1 n = n / 3 + 1
if n is even, divide by 2
print out n

repeat the above operations until n=1, then stop 

Array Problems

easy
double mean(x,n)
Return the mean of an array (x) of doubles of size n
easy
int prod(x,n)
Return the product of all the values contained in array (x) of size n.
harder
void demean(x,n)
Subtract the mean from each element
x: 10,20,30 mean = 20 ->x: -10,0,10
harder
void range_reverse(x, n, a, b)
reverse the array from index a to index 

For example, given an array
uint32_t a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
range_reverse(a, 9, 2, 4);

should result in a containing:
a = {1, 2, 5, 4, 3, 6, 7, 8, 9}

Floating Point Problems

double hypot(a,b)
Given two sides of a right-angled triangle, compute the third side
double mean(a,b)
return the average of a and b
double bool pythagTriple(a,b)
return true if a2+b2  is a whole number
double areaOfTriangle(x1,y1,x2,y2,x3,y3)
return the area of a triangle using Heron’s formula
https://en.wikipedia.org/wiki/Heron's_formula

---
### Lab 3 
[Instructions](https://docs.google.com/document/d/1CEPY0TET-4erZ122Z_Po5M_wNqGvKQ7vCNt1LVVIDAo/edit?usp=sharing)

int sum(int a, int b, int c)
return the sum of three numbers
example: a = 1, b = 2, c = 3 return 1 + 2 + 3
int sum(int a)
return the sum of numbers from 1 to a
example: a = 3, return 1 + 2 + 3
int sumEven(int a, int b);
return the sum of even numbers in the range from a to b
example: a = 2, b = 9, return 2 + 4 + 6 + 8
int prod(int a, int b, int c);
return the product of three numbers
example: a = 1, b = 2, c = 3, return 1 * 2 * 3
int prod(int a);
return the product from 1 to a
example: a = 5, return 1 * 2 * 3 * 4 * 5
int prodOdd(int a, int b);
return the product of odd numbers in the range from a to b
example: a = 3, b = 10, return 3 * 5 * 7 * 9
int max(int a, int b);
return the larger number
example a = 3, b = 5, return 5

---
### Lab 4 
[Instructions](https://docs.google.com/document/d/170N6DQ_KvcCTuwsbLRhLkrCEKzP2Cp1QIeUSh8logF8/edit?usp=sharing)

Write your arm code for 7 functions.
void sub3(int a[], int len);
	Given an array with integer elements, subtract 3 from every element in this array.
	eg: {3,5,7,9,11} after call sub3(arr, 5), arr should become: {0,2,4,6,8}
int sumDouble(int a[], int len);
Given an array with integer elements, sum up the double of each element in array 'a' and return this sum.
	eg: a = {1,2,3,4}, sumDouble(a, 4) should return 2 + 4 + 6 + 8
Hint: backward branching, consider how to skip to the next element in the array (using add)
 int sumSq(int a[], int len); int
Given an array with integer elements, sum up the square of each element in array 'a' and return this sum.
	eg: a = {1,2,3,4}, sumSq(a, 4) should return 1 + 4 + 9 + 16
void rot(char s[], int len);char 1, add r0, #v
Given an array with char elements, you need to do rot13 encryption for this array. (add 13 to each element in this array) ldrb, strb
eg:arr: {a,b,c,d,e} a -> a + 13
after call sub3(arr, 5), arr should become: {n,o,p,q,r}
Note that: 1 byte for char

---
### Lab 5 
[Instructions](https://docs.google.com/document/d/1p2QG9inrbtnyuMnTmpj2mHKEslaE_xtyS2Yx02Mcf4M/edit?usp=sharing)

Write an assembler program in arm with two functions:
  choose()
  factorial()
main will call function choose(n,r).
The function choose should call factorial in the following way
choose(n,r) = n! / (r! * (n-r)!)
since you don't have division, the subroutine of division is named _aeabi_idiv, you can use bl to call it
look up how to divide by writing the following code and compiling it:	
int div(int a, int b) { return a / b; }
You will see that doing a division requires setting r0 and r1, then calling a function.
Suppose r0 = a, r1 = b
Push {lr}
Bl subf 
Pop {lr}


