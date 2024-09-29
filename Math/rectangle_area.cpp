#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ax1,ay1,ax2,ay2,bx1,by1,bx2,by2;
    cin>>ax1>>ay1>>ax2>>ay2>>bx1>>by1>>bx2>>by2;
    int area=0;
    int len1=0,breadth1=0,len=0,b=0;
    for(int i=ax1;i<ax2;i++)
    {
        len1++;
    }
    for(int i=ay1;i<ay2;i++)
    {
        breadth1++;
    }
    for(int i=bx1;i<bx2;i++)
    {
        len++;
    }
    for(int i=by1;i<by2;i++)
    {
        b++;
    }
    cout<<len1
}