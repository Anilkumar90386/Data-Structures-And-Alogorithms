#include<bits/stdc++.h>
using namespace std;
// bool anagram(string s1,string s2)
// {
//     vector<int>freq(26,0);
//     if(s1.size()!=s2.size()) return false;
//     for(int i=0;i<s1.size();i++)
//     {
//         freq[s1[i]-'a']++;
//         freq[s2[i]-'a']--;
//     }
//     for(int i=0;i<26;i++)
//     {
//         if(freq[i]!=0) return false;
//     }
//     return true;
// }
bool anagram(string s1,string s2)
{
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            return false;
        }
    }
    return true; 
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(anagram(s1,s2))
    {
        cout<<"Anagram";
    }   
    else{
        cout<<"Not";
    }
}