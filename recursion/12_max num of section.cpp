// https://www.geeksforgeeks.org/maximize-the-number-of-segments-of-length-p-q-and-r/

#include <iostream>
#include<vector>
#include<limits.h>

using namespace std;

int solve(int n, int p, int q, int r){
    
    if(n==0){
        return 0;
    }
    
    if(n<0){
        return INT_MIN;
    }
    
    int a= solve(n-p,p,q,r)+1;
    int b= solve(n-q,p,q,r)+1;
    int c= solve(n-r,p,q,r)+1;
    
    return max(a,max(b,c));
}

int main()
{

int n=7;
int p=5;
int q=2;
int r=2;

cout<<solve(n,p,q,r);

    return 0;
}
