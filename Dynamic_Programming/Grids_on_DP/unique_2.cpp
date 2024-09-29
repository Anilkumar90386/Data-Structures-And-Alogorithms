#include<bits/stdc++.h>
using namespace std;
int unique_2(int i,int j)
{
    if(i==-1 && j==-1 && i<0 || j<0) return 0;
    if(i==0 && j==0) return 1;
    int top=f(i-1,j);
    int left=f(i,j-1);
    return left+top;
}
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<f(m-1,n-1);

}