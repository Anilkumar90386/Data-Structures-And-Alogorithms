#include<bits/stdc++.h>
using namespace std;
int path_sum(int i,int j,int arr[1][2])
{
     if(i==0 && j==0) return arr[0][0];
     if(i<0 || j<0) return INT_MAX;          //recursion
     int left=arr[i][j]+path_sum(i,j-1,arr);
     int top=arr[i][j]+path_sum(i-1,j,arr);
     return min(left,top);
}
int main()
{
   int arr[][2]={
    {5,9,6},
    {11,5,2}
   };
   cout<<path_sum(1,2,arr);
}