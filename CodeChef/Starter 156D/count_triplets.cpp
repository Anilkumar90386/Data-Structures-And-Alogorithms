#include<bits/stdc++.h>
using namespace std;
int triple(int arr[],int n)
{
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < n; ++k) {
            for (int j = 0; j < n; ++j) {
                if (abs(i - j) + abs(j - k) == target) {
                    cnt++;
                }
            }
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<triple(arr,n)<<endl;
    }
}