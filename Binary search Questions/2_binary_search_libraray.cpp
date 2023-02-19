#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
  vector<int> nums{-1,0,3,5,9,12};
  //binary_serach return true if element found, else false
  int ans=binary_search(nums.begin(),nums.end(),3);
 if(ans){
   cout<<"Element exist";
 }else{
   cout<<"Not found";
 }

  // for array
  int arr[]={1,2,3,4,5};
  int size=5;

  ans=binary_search(arr,arr+size,3);
 if(ans){
   cout<<"Element exist";
 }else{
   cout<<"Not found";
 }
  return 0;
}