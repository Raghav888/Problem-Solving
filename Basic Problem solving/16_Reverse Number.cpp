#include <iostream>

using namespace std;

int main() {
  cout << "Enter Number to be reversed" << endl;
  int num;
  cin >> num;
  int temp;
  while (num > 0) {
    temp = num % 10;
    num = num / 10;
    cout << temp;
  }
}