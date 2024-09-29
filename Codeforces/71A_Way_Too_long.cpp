#include<bits/stdc++.h>
using namespace std;
string f(string s){
    int n=s.size();
    char start=s[0];
    char end=s[n-1];
    string res="";
    if(s.size()>10)
    {
        res+=start;
        res+=to_string(n-2);
        res+=end;
    }
    else{
        res+=s;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<f(s)<<endl;
    }
}