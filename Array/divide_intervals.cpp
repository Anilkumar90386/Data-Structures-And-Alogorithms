#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>arr={{441459,446342},{801308,840640},{871890,963447},{228525,336985},{807945,946787},{479815,507766},{693292,944029},{751962,821744}};
    int cnt=0;
    int i=0;
    while(i<arr.size()-1)
    {
        if(arr[i][0]>arr[i+1][0])
        {
            cnt++;
        }
        i++;
    }
    cout<<cnt+1;   
}
