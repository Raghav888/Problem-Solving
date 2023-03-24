/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main() {
  int arr[4] = {12, 14, 18, 20};

  // Below 3 refers to base address of arr
  // So output will be base address of arr
  cout << arr << endl;
  cout << &arr << endl;
  cout << &arr[0] << endl;

  cout << *arr + 1 << endl;   // will add 1 in arr[0]
  cout << (*arr) + 1 << endl; // will add 1 in arr[0]
  cout << *arr << endl;       // will print arr[0]
  cout << *(arr + 1) << endl; // will print arr[1]

  //   But cout implementation is different for int and char

  char c[10] = "ragh";
  // cout for char array will print whole array, not base address
  cout << c << endl;
  char *ptr = c;
  cout << ptr << endl;        // will also print whole array
  cout << ptr + 2 << endl;    // will print string form index 2
  cout << *ptr << endl;       // will print 1st elemnet of string
  cout << *(ptr + 1) << endl; // will print 2nd elemnet of string
  cout << &c << endl;         // print base address of arrary

  //  Note char c= 'k', string temp ="k"
  // for char use '', for string use ""

  return 0;
}
