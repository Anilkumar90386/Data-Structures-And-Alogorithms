#include<bits/stdc++.h>
using namespace std;
int main()
{
      int rev;
      cin>>rev;
      int sum=0;
        bool flag=true;
        while(rev!=0)
        {
            if(flag)
            {
                sum+=rev%10;
                flag=false;
            }
            else{
                sum-=rev%10;
                flag=true;
            }
            rev/=10;
        }
        cout<<sum;
}