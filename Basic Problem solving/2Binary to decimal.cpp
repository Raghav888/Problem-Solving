#include <cmath>
#include <iostream>

using namespace std;

int main() {
  cout << "Enter binary number" << endl;
  int num;
  cin >> num;
  int index = 0;
  int temp;
  int sum = 0;
  while (num > 0) {
    temp = num % 10;
    num = num / 10;
    sum += (temp)*pow(2, index);
    index++;
  }
  cout << "Decimal is" << sum;
}