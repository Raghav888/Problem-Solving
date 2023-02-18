#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix) {
  vector<int> ans;

  int startRow = 0;
  int startColumn = 0;
  int endRow = matrix.size() - 1;
  int endColumn = matrix[0].size() - 1;
  int totalElements = matrix.size() * matrix[0].size();

  while (totalElements > 0) {

    for (int i = startColumn; i <= endColumn && totalElements > 0; i++) {
      ans.push_back(matrix[startRow][i]);
      totalElements--;
    }
    startRow++;
    for (int i = startRow; i <= endRow && totalElements > 0; i++) {
      ans.push_back(matrix[i][endColumn]);
      totalElements--;
    }
    endColumn--;

    for (int i = endColumn; i >= startColumn && totalElements > 0; i--) {
      ans.push_back(matrix[endRow][i]);
      totalElements--;
    }
    endRow--;

    for (int i = endRow; i >= startRow && totalElements > 0; i--) {
      ans.push_back(matrix[i][startColumn]);
      totalElements--;
    }
    startColumn++;
  }
  return ans;
}

int main() {
  vector<vector<int>> arr{{1, 2, 3, 4},
                          {5, 6, 7, 8},
                          {9, 10, 11, 12},
                          {13, 14, 15, 16},
                          {17, 18, 19, 20}};

  vector<int> ans = spiralOrder(arr);
  for (auto val : ans) {
    cout << val << " ";
  }

  return 0;
}
