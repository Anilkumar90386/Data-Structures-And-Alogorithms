#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string result;
    
    for (char ch : s) {
        int n = result.size();
        if (n < 2 || !(result[n - 1] == ch && result[n - 2] == ch)) {
            result += ch;
        }
    }
    
   cout<<result;
}