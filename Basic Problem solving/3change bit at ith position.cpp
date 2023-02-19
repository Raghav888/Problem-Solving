#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int binary[32];
  int num;
  int bit_num;
  int i = 0;
  cout << "Enter decimal number" << endl;
  cin >> num;
  cout << "Enter position of bit to be changed" << endl;
  cin >> bit_num;

  for (int j = 0; j < 32; j++) {
    if (num > 0) {
      binary[i] = num % 2;
      num = num / 2;
      i++;
    } else {
      binary[i] = 0;
    }
  }

  if (binary[bit_num] == 0) {
    binary[bit_num] = 1;
  } else {
    binary[bit_num] = 0;
  }

  num = 0;
  for (int j = 31; j >= 0; j--) {
    if (binary[j] > 0) {
      num += binary[j] * pow(2, j);
    }
  }
  cout << "The new decimal num is: " << num;
}
