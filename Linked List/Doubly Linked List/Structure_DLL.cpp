#include<bits/stdc++.h>
using namespace std;
struct node{
public:
    int data;
    node* next;
    node* back;
    node(int data1,node* next1,node* back1)
    {
        data=data1;
        next=next1;
        back=back1;
    }
public:
    node(int data1)
    {
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
int main()
{
    vector<int>arr={10,11,12,13,14};
    node* second=new node(arr[1]);
    node* ele=second->next;
    cout<<ele->data;
}