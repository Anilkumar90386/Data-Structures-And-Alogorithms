#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    int nums[n];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> result;
        int currentSum = 0;

        for (int i = 0; i < k; i++) {
            currentSum += nums[i];
        }

        if (currentSum == x) {
            result.push_back(0);
        }

        for (int i = k; i <n; i++) {
            currentSum += nums[i];
            currentSum -= nums[i - k];

            if (currentSum == x) {
                result.push_back(i - k + 1);
            }
        }

        
    for(auto it:result)
    {
        cout<<it<<" ";
    }
}