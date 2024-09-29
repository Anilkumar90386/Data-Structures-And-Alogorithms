#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={5,3,4,2,1};
   int n=arr.size();
   int smallest=INT_MAX,s_smallest=INT_MAX;
   sort(arr.begin(),arr.end());
   smallest=arr[0];
   for(int i=0;i<n;i++)
   {
       if(arr[i]<s_smallest && smallest!=arr[i]) //BruteForce O(NlogN)+O(N)
       {
        s_smallest=arr[i];
       }
   }

//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]<smallest)
//        {
//         s_smallest=smallest;
//         smallest=arr[i];            O(N) Optimal
//        }
//        else if(arr[i]<s_smallest && smallest!=arr[i])
//        {
//         s_smallest=arr[i];
//        }
//    }
  cout<<s_smallest;
    return 0;
}