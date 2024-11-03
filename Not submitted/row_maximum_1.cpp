#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    int maxi=0;
    int rowind=-1;
    for(int i=0;i<n;i++)
    {
         int cnt=0;
        for(int j=0;j<m;j++)
        {
           if(mat[i][j]==1)
           {
              cnt++; 
           }
        }
       if(cnt>maxi)
       {
         maxi=cnt;
         rowind=i;
       }
    }
    cout<<rowind<<maxi;
}