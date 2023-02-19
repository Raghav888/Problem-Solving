#include <iostream>
#include<vector>
using namespace std;

int
last_occurence (vector < int >&nums, int target)
{
  int start = 0;
  int end = nums.size () - 1;
  int mid = start + (end - start) / 2;
  int ans;

  while (start <= end)
    {

      if (nums[mid] == target)
	{
	    ans=mid;
	    start=mid+1;
	}
      else if (nums[mid] < target)
	{
	  start = mid + 1;
	}
      else
	{
	  end = mid - 1;
	}
      mid = start + (end - start) / 2;
    }
  return ans;
}

int
main ()
{
  vector < int >nums
  {
  -1, 0, 3,3, 5, 9,9, 12};
  int ans = last_occurence (nums, 9);
  cout << ans;
  return 0;
}
