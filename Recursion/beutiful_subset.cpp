    #include<bits/stdc++.h>
    using namespace std;
    void f(int i,int arr[],int n,int &cnt,int k)
    {
        if(i==n)
        {
            if(k!=0)
            {
                cnt++;
            }
            return;
        }
        
        f(i+1,arr,n,cnt,abs(k-arr[i]));
        f(i+1,arr,n,cnt,k);
    }
    int main()
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    
        int cnt=0;
        f(0,arr,n,cnt,k);
        cout<<cnt;
    }