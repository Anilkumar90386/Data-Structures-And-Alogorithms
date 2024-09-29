#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,3,4,5,6};
    
    for(int i=1;i<6;i++)
    {
        if(arr[i-1]>arr[i])
        {
             cout<<false;
             break;
        }
    }
    cout<<true;
}