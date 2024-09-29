#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    string name1=name;
    int low=0;
    int high=name.size()-1;
    while(low<high)
    {
        name[low]=name[low]+name[high];
        name[high]=name[low]-name[high];
        name[low]=name[low]-name[high];
        low++;
        high--;
    }
    if(name==name1) cout<<true;
    else cout<<false;
}