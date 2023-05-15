#include <iostream>
#include <vector>

using namespace std;

// TC Best Case O(nlogn)
// TC worst case O(n^2) when array is sorted reversly.

int partition(vector<int> &arr, int start, int end)
{
    // pivot ll be 1st element
    int pivotIndex = start;
    int pivot = arr[pivotIndex];
    int count = 0;

// get number of element less than pivot
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

// put the pivot at correct position
    int rightIndex = count + start;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

// get all small elements on left side of pivot and larget on right side
    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= arr[pivotIndex])
        {
            i++;
        }

        while (arr[j] > arr[pivotIndex])
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }

// return pivotindex
    return pivotIndex;
}

void quickSort(vector<int> &arr, int start, int end)
{

// base condition
    if (start >= end)
    {
        return;
    }

// operation
    int pivotIndex = partition(arr, start, end);

// recursive call for left array and then right array
    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main()
{

    vector<int> arr{2, 4, 7, 2, 1, 3, 0};
    quickSort(arr, 0, arr.size() - 1);

    for (auto val : arr)
    {
        cout << val << " ";
    }

    return 0;
}
