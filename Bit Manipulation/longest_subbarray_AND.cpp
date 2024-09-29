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
    int max_and=0;
    for(auto el:arr)
    {
        max_and=max(max_and,el);
    }  
    int curr_length=0,max_len=0; 
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max_and)
        {
            curr_length++;
        }
        else{
            max_len=max(max_len,curr_length);
            curr_length=0;
        }
    }
    cout<<max_len;
}   