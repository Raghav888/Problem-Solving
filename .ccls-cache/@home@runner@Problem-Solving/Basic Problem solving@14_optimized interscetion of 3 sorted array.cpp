#include <iostream>
#include <vector>
using namespace std;

void commonElements(vector<int> arr, vector<int> arr_2, vector<int> arr_3) {
  int i = 0;
  int j = 0;
  int k = 0;
  while (i < arr.size() && j < arr_2.size() && k < arr_3.size()) {

    if (arr[i] == arr_2[j] && arr_2[j] == arr_3[k]) {
      cout << arr[i] << " ";
      i++;
      j++;
      k++;
    } else if (arr[i] < arr_2[j]) {

      i++;
    } else if (arr_2[j] < arr_3[k]) {

      j++;
    } else {
      k++;
    }
  }
}

int main() {
  vector<int> arr{6, 7, 20, 80, 100};
  vector<int> arr_2{1, 5, 10, 20, 40, 80};
  vector<int> arr_3{3, 4, 15, 20, 30, 70, 80, 120};

  commonElements(arr, arr_2, arr_3);

  return 0;
}
