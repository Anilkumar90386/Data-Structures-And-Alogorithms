#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,bound;
    cin>>x>>y>>bound;
    vector<int>nums;
    for(int i=0;i<y;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(i!=j)
            {
                
                if(num<=bound)
                {
                    nums.push_back(num);
                }
            }
        }
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i];
    }
}