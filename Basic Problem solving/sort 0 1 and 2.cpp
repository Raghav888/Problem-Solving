#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> array1{2, 0, 1};

  int start = 0;
  int end = array1.size() - 1;
  int i = 0;
  while (start < end) {

    if (array1[i] == 0) {
      swap(array1[i], array1[start]);
      i++;
      start++;
    } else {
      swap(array1[i], array1[end]);
      end--;
    }
  }

  // cout<<start<<" "<<end<<" "<< i<<endl;

  end = array1.size() - 1;
  while (start < end) {

    if (array1[i] == 1) {
      swap(array1[i], array1[start]);
      i++;
      start++;
    } else if (array1[i] == 0) {
      i++;
      start++;
    } else {
      swap(array1[i], array1[end]);
      end--;
    }
  }

  for (auto val : array1) {
    cout << val << " ";
  }

  return 0;
}
