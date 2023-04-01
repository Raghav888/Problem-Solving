#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int *p = &a;
  int **p2 = &p;
  cout << *p;   // 10
  cout << **p2; // 10 as it is double pointer. It will first go to address of p
                // frm thr again it ll go to add that p contains and print value
                // that is stored at that location

  return 0;
}