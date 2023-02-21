#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target) {

  int start = 0;
  int end = (matrix.size() * matrix[0].size()) - 1;
  int mid = start + (end - start) / 2;
  int row, col;

  while (start <= end) {
    row = mid / matrix[0].size();
    col = mid % matrix[0].size();

    if (matrix[row][col] == target) {
      return true;
    }

    else if (matrix[row][col] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }

  return false;
}

int main() {
  vector<vector<int>> arr{{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15, 16},
                          {17, 18, 19, 20}};

  cout << searchMatrix(arr, 113);

  return 0;
}
