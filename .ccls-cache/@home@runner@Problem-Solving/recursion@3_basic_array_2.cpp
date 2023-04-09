/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <limits.h>

using namespace std;

void callBack(int a[], int s, int i) {

  // base condition

  if (i >= s) {
    return;
  }

  // processing
  cout << a[i] << endl;
  ;

  // recursive call
  callBack(a, s, i + 1);
}

int main() {

  int a[] = {1, 200, 31, 4322, 500};
  int s = 5;
  int i = 0;
  callBack(a, s, i);
  return 0;
}
