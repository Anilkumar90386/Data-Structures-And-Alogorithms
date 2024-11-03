#include<bits/stdc++.h>
using namespace std;
string matching(string s1[],string s2[],int N,int M)
{
    vector<int>freq(26,0);
    for(int i=0;i<s1.size() || s2.size();i++)
    {
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
            return "YES";
        }
    }
    return 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
        string s1[N];
        string s2[M];
         for(int i = 0; i < N; i++) {
            cin >> s1[i];
        }
        for(int i = 0; i < M; i++) {
            cin >> s2[i];
        }
        cout<<matching(s1,s2,N,M)<<endl;
    }
}