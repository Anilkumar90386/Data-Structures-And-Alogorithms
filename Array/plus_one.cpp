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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum*10+arr[i];
    }
    cout<<sum+1;
    vector<int> result;
while (sum > 0) {
    result.insert(result.begin(), sum % 10);
    sum /= 10;
}
}