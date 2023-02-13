#include <iostream>
#include <vector>

using namespace std;

vector<int> swap_temp(vector<int> array_one, int start, int end) {
  int temp = array_one[start];
  array_one[start] = array_one[end];
  array_one[end] = temp;
  return array_one;
}

vector<int> swap_add_minus(vector<int> array_one, int start, int end) {
  array_one[start] = array_one[start] + array_one[end];
  array_one[end] = array_one[start] - array_one[end];
  array_one[start] = array_one[start] - array_one[end];
  return array_one;
}

vector<int> swap_using_xor(vector<int> array_one, int start, int end) {
  array_one[start] = array_one[start] ^ array_one[end];
  array_one[end] = array_one[start] ^ array_one[end];
  array_one[start] = array_one[start] ^ array_one[end];
  return array_one;
}

void printArray(vector<int> array_one) {
  for (auto val : array_one) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  vector<int> array_one{1, 2, 3, 4, 5, 6, 7, 8};

  int start = 0;
  int end = array_one.size() - 1;

  while (start <= end) {
    array_one = swap_temp(array_one, start, end);
    start++;
    end--;
  }
  cout << "Swapping using temp var" << endl;
  printArray(array_one);

  start = 0;
  end = array_one.size() - 1;
  while (start <= end) {
    array_one = swap_add_minus(array_one, start, end);
    start++;
    end--;
  }
  cout << "Swapping using add minus logic" << endl;
  printArray(array_one);

  start = 0;
  end = array_one.size() - 1;
  while (start <= end) {
    array_one = swap_using_xor(array_one, start, end);
    start++;
    end--;
  }
  cout << "Swapping using xor logic" << endl;
  printArray(array_one);

  return 0;
}
