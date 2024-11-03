#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // sort(arr,arr+n,greater<int>());
    // int largest=arr[0];
    // int s_largest=-1;
    // for(int i=1;i<n;i++) 
    // {
    //     if(arr[i]!=largest && arr[i]>s_largest)      TC - O(Nlog N)+O(N)
    //     {
    //         s_largest=arr[i];
    //     }
    // }


    // int largest=0,s_largest=-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]>largest)
    //     {
    //         s_largest=largest;
    //         largest=arr[i];                          TC -> O(N)
    //     }
    //     else if(arr[i]>s_largest && arr[i]!=largest)
    //     {
    //         s_largest=arr[i];
    //     }
    // }

     
    // int largest=0,s_largest=-1;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]>largest)
    //     {
    //         largest=arr[i];
    //     }
    // }
    // for(int i=0;i<n;i++)                            TC -> O(2N)
    // {
    //     if(arr[i]>s_largest && arr[i]!=largest)
    //     {
    //         s_largest=arr[i];
    //     }
    // }
    // cout<<s_largest;
    
}