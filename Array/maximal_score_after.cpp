#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    // long long score=0;
    // for(int i=0;i<n;i++)
    // {
    //     int num=pq.top();
    //     score+=num;
    //     if(num%3==0) pq.push(num/3);
    //     else{
    //         pq.push((num+1)/3);
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        int num=pq.top();
        cout<<num;
    }
    // cout<<score;
    
}