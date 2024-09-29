#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,2,3,13,13,13,4,5};
    int largest=0;
    int second_largest=-1;
    // for(int i=0;i<5;i++)
    // {
    //     if(arr[i]>largest)
    //     {
    //         second_largest=largest;
    //         largest=arr[i];
    //     }
    //     else if(arr[i]>second_largest && arr[i]!=largest)
    //     {
    //         second_largest=arr[i];
    //     }
    // }
    sort(ans,ans+ans.size(),greater<int>());
    for(int i=0;i<6;i++)
    {
        if(arr[i]!arr[0])
        {
            second_largest=arr[i];
            break;
        }
    }
    cout<<second_largest;
}