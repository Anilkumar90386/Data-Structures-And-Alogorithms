#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>words={"the sky is blue"};
    vector<string>temp;
    for(int i=words.size()-1;i>=0;i--)
    {
        string word=words[i];
        for(char c:word)
        {
            if(c==' ')
            { 
               temp.push_back(word);
               break;
            }
        }
    }
    for(int i=0;i<temp.size();i++)
    {
        cout<<temp[i];
    }
}