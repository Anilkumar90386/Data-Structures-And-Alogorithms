#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int data1,node* next1)
    {
        data=data1;
        next=next1;
    }
};
int main()
{
    vector<int>arr={10,3,4,2,1};
    node* y=new node(arr[0],nullptr);
    cout<<y->next;
}