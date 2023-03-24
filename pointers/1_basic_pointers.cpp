/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
  int a = 10;
  cout << &a << endl; // It will print address of address

  // POinter are used to store address of var.
  // * is pointer/dereference operator

  int *p = &a; // p will save address of a

  cout << *p << endl; // Here we are dereferencing pointer and getting value
                      // from the stored address
                      // So output will be 10

  // Null pointer

  int *p2 = 0;

  // cout<<*p2<<endl; // will give error as its null

  int b = 10;

  int *ptr = &b;
  // cout<<ptr<<endl;
  // ptr=ptr+1; // it will add 4 to ptr value as int data type is 4 byte
  // cout<<ptr<<endl;

  *ptr = *ptr + 1; // it will add 1 in b, as *ptr refers to address , so same
                   // with *,/,-,etc.

  cout << b << endl;

  // Create a copy of pointer

  int num = 10;
  int *point = &num;
  int *point2 = point;

  cout << *point << endl;
  count << *point2 << endl;
  // Both will contain address of num, so we will get same output from them i.e
  // 10

  return 0;
}
