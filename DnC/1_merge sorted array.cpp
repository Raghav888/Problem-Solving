// https://leetcode.com/problems/merge-sorted-array/submissions/946404841/

#include <iostream>
#include <vector>

using namespace std;

 
void mergeHelper(vector<int> arr1, vector<int> &arr2, vector<int> &ans, int i,

           int j,int &m, int &n)
{


    if (i >= m && j >= n)

    {

        return;
    }

    if (i >= m && j < n)

    {

        while (j < n)

        {

            ans.push_back(arr2[j]);

            j++;
        }
        return;
    }

    if (i < m && j >= n)

    {

        while (i < m)

        {

            ans.push_back(arr1[i]);

            i++;
        }
        return;
    }

    if (arr1[i] <= arr2[j])
    {

        ans.push_back(arr1[i]);

        mergeHelper(arr1, arr2, ans, i + 1, j,m,n);
    }
    else
    {

        ans.push_back(arr2[j]);

        mergeHelper(arr1, arr2, ans, i, j + 1,m,n);
    }
}
    
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector < int >ans;
       
       mergeHelper(vector<int>(nums1.begin(),nums1.begin()+m),nums2,ans,0,0,m,n);
       
nums1.clear();
for (int i=0;i<ans.size();i++){
  
     nums1.push_back(ans[i]);
}

       
    }

 
 
 
int 
main () 
{
  
 
vector < int >arr1 
  {
  
1,2,3,0,0,0};
  
 
vector < int >arr2 
  {
  
2,5,6};
  
  
merge (arr1,3, arr2,3);

 
 
for (auto val:arr1)
    
    {
      
 
cout << val << " ";
    
 
}

 
}


