
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int hash[100]={0};
    /*for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;   TC -> O(N)
    }                     SC -> O(N)  
    for(int i=0;i<n;i++)
    {
        if(hash[i]==1)    
        {
            cout<<i;
        }
    }*/
    /*int XOR=0;
    for(int i=0;i<n;i++)
    {                        O(N)
        XOR=XOR^arr[i];      O(1)
    }
    cout<<XOR;*/
}