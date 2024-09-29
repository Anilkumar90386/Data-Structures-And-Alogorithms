#include<bits/stdc++.h>
using namespace std;
int main()
{
    int left,right;
    cin>>left>>right;
    vector<int>ans;
    for(int i=left;i<=right;i++)
    {
        int n=i;
        bool flag=true;
        while(n!=0)
        {
            int ld=n%10;
            if(ld==0 || i%ld!=0)
            {
                flag=false;
                break;
            }
            n=n/10;
        }
        if(flag) ans.push_back(i);
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
}