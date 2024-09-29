// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int arr[],int start,int end)
// {
//     int l=start;
//     int r=end;
//     while(l<r)
//     {
//         swap(arr[l],arr[r]);
//         l++;r--;
//     }
    
// }
// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//     reverse(arr,0,k);    //  Optimal TC - O(3N) SC - O(1)
//     reverse(arr,k+1,n);
//      reverse(arr,0,n);
//      vector<int>temp;
//      for(int i=0;i<k;i++)
//      {
//         temp.push_back(arr[i]);
//      }
//      for(int i=k;i<n;i++)
//      {
//         arr[i-k]=arr[i];
//      }
//      int j=0;                //  Brute Force - TC O(3N) SC- O(N)
//      for(int i=n-k;i<n;i++)
//      {
//         arr[i]=temp[j];
//         j++;
//      } 
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }