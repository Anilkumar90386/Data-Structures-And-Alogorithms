    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       int minval=*min_element(arr.begin(),arr.end());
       int maxval=*max_element(arr.begin(),arr.end());
       set<int>arrset(arr.begin(),arr.end());
       for(int i=minval;i<=maxval;i++)
       {
          if(arrset.find(i)==arrset.end())
          {
            cout<<i<<" ";
          }
       }  
    }