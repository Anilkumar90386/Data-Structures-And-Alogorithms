#include<bits/stdc++.h>
using namespace std;
int f(string s)
{
    int cnt = 0;
    int first_one = s.find('1');
    int last_one = s.rfind('1');

    if (first_one != string::npos && last_one != string::npos && first_one != last_one) {
        for (int i = first_one + 1; i < last_one; i++) {
            if (s[i] == '0') cnt++;
        }
    }
   return cnt;
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
