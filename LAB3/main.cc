#include <iostream>
using namespace std;

extern int sum(int a, int b, int c);// sum three numbers
extern int sum(int a); // return the sum of numbers from 1 to a
extern int sumEven(int a, int b); // return the sum of even number in range from a to b
extern int prod(int a, int b, int c); // product of three numbers
extern int prod(int a); // return the product from 1 to a
extern int prodOdd(int a, int b); // return the product of odd numbers numbers in range from a to b
extern int max(int a, int b);// return the larger number



int main(int argc, char *argv[]) {
  int r1 = sum(1,2,3);
  cout << r1 << endl;
  int r2 = sum(5); // 1 + 2 + 3 + 4 + 5
  cout << r2 << endl;
  int r3 = sumEven(2, 9);// 2 + 4 + 6 + 8
  cout << r3 << endl;
  int r4 = prod(1,2,3); // 1 * 2 * 3
  cout << r4 << endl;
  int r5 = prod(5); // 1 * 2 * 3 * 4 * 5
  cout << r5 << endl;
  int r6 = prodOdd(3,10); // 3 * 5 * 7 * 9
  cout << r6 << endl;
  int r7 = max(3, 5); // return 5
  cout << r7 << endl;
  return 0;
}
