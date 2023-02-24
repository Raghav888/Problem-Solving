// Unbounded will be similar just in that we wont have i< size() condition as
// its infifite array.

#include <iostream>
#include <vector>

using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x) {

  int start = 0;
  int end = arr.size() - 1;

  while (end - start >= k) {

    if ((x - arr[start]) > (arr[end] - x)) {
      start++;
    } else {
      end--;
    }
  }

  return vector<int>(arr.begin() + start, arr.begin() + end + 1);
}

int main() {
  vector<int> arr{1, 2, 3, 4, 5};
  vector<int> ans = findClosestElements(arr, 4, 3);

  for (auto val : ans) {
    cout << val << " ";
  }

  return 0;
}
