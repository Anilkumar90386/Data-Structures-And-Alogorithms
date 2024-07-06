    #include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>nums;
    for(int i=0;i<n;i++)
    {
        int difference=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
               
               if(arr[i]==arr[j])
               {
                difference=abs(i-j);
                nums.push_back(difference);
               }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums[i];
    }
}