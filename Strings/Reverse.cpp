#include<bits/stdc++.h>
using namespace std;
// int getLength(string name)
// {
//    for(auto it:name)
//    {
//     cnt++;
//    }
//   return cnt;
// }
// string reverse(string name)
// {
//    int l=0;;
//    int high=name.size();
//    while(low<=high)
//    {
//       swap(name[low],name[high]);
//    }
// }
int main()
{
   string name;
   getline(cin,name);
   int low=0;;
   int high=name.size()-1;
   while(low<high)
   {
      name[low]=name[low]+name[high];
      name[high]=name[low]-name[high];
      name[low]=name[low]-name[high];
      low++;
      high--;
   }
   cout<<name; 
   
}