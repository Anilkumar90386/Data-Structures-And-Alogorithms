#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int maxlength=0;
   for(int i=0;i<n;i++)
   {
      set<int>st;
      for(int j=0;j<n;j++)
      {
        st.insert(arr[j]);
        if(st.size()<=2)
        {
            maxlength=max(maxlength,j-i+1);
        }
        else{
            break;
        }
      }
   }
   cout<<maxlength;
}