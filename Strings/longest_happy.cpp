#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b,c;
        cin>>a>>b>>c;
        int n=a+b+c;
        int maxi=0;
        string s="";
        int cnta=2,cntb=2,cntc=2;
        for(int i=0;i<n;i++)
        {
           maxi=max(maxi,max(a,max(b,c))); 
           if(a==maxi && cnta<3)
           {
              s+='a';
              a--;
              cnta--;
              cntb=3;
              cntc=3;
           }  
           else if(b==maxi)
           {
                s+='b';
                b--;
                cntb--;
                cntc=3;
                cnta=3;
           }
           else if(c==maxi && cntc<3){
                s+='c';
                c--;
                cntc--;
                cntb=3;
                cnta=3;
           }
        }
        cout<<s;
       
}