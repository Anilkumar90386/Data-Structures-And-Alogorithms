#include<bits/stdc++.h>
using namespace std;
void markrow(int &i,int n,int mat[][]){
    for(int j=0;j<n;j++)
    {
        if(mat[i][j]!=0)
        {
            mat[i][j]=-1;
        }
    }
}
void markcol(int i,int n,int mat[][]){
    for(int j=0;j<m;j++)
    {
        if(mat[i][j]!=0)
        {
            mat[i][j]=-1;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int mat[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0)
            {
                markrow(i,n,mat);
                markcol(j,m,mat);
            }
        }
    }

}