#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int biils[n];
    for(int i=0;i<n;i++)
    {
        cin>>bills[i];
    }
    int five=0,ten=0,twenty=0;
    for(int i=0;i<n;i++)
    {
        if(bills[i]==5)
        {
            five++;
        }
        else if(arr[i]==10)
        {
            if(five)
            {
               five--;
               ten++;
            }
            else cout<<false;
        }
        else if(arr[i]==20)
        {
            if(ten || five)
            {
                five--;
                ten--;
                twenty++;
            }
            else{
                cout<<false;
            }
        }        
    }
}