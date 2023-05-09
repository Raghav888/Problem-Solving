#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr1, int start, int end)
{

    int mid = start + (end - start) / 2;

    //  Size of two array

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // create two new array
    int *left = new int(len1);
    int *right = new int(len2);

    //  assign value to left array
    int k = start;

    for (int i = 0; i < len1; i++)
    {
        left[i] = arr1[k];
        k++;
    }

    //  assignvalue to right array

    k = mid + 1;

    for (int i = 0; i < len2; i++)
    {
        right[i] = arr1[k];
        k++;
    }

    //  compare and asisgn value in original array
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while (leftIndex < len1 && rightIndex < len2)
    {

        if (left[leftIndex] < right[rightIndex])
        {
            arr1[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else
        {
            arr1[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //  if still left array has elements , then direct paste it in main array
    while (leftIndex < len1)
    {
        arr1[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }

    //  if still right array has elements , then direct paste it in main array

    while (rightIndex < len2)
    {
        arr1[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
}

void mergeSort(vector<int> &arr1, int start, int end)
{

    // base condition
    if (start >= end)
    {
        return;
    }

    // opertaion
    int mid = start + (end - start) / 2;

    // Recursive call to divide array

    mergeSort(arr1, start, mid);
    mergeSort(arr1, mid + 1, end);

    // sort and join the array

    merge(arr1, start, end);
}

int main()
{
    vector<int> arr1{

        2, 5, 1, 3, 8, 1};

    mergeSort(arr1, 0, arr1.size() - 1);

    for (auto val : arr1)
    {
        cout << val << " ";
    }
}
