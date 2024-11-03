#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count=0;
    cin>>n;
    if(n<9)
    {
       
        n--;
    }
    else if(n>=10)
    {
        for(int i=10;i<=n;i++)
        {
            int j=i;
            while(j!=0)
            {
                int ld=j%10;
                if(ld)
                {
                   count++; 
                }
                j=j/10;
            }
        }
    }
    cout<<count;
}