#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[10];
    cin>>name;
    for(int i=0;name[i]!='\0';i++)
    {
       for(int j=i;j>=0;j--)
       {
        cout<<name[j];
       }
       cout<<endl;
    }
}