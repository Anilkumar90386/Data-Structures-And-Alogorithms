#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=nullptr;
    }
};
node* convert(vector<int>&arr)
{
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
node* partition(node* head,int val)
{
    vector<int>res;
    node* temp=head;
    while(temp!=NULL)
    {
        res.push_back(temp->data);
        temp=temp->next;
    }
    //{1,4,3,2,5,2}
    vector<int>ans;
    for(int i=0;i<res.size();i++)
    {
        if(res[i]<val)
        {
            ans.push_back(res[i]);
        }
    }
    for(int i=0;i<res.size();i++)
    {
        if(res[i]>=val)
        {
            ans.push_back(res[i]);
        }
    }
    node* temp1=head;
    int ind=0;
    while(temp1!=NULL)
    {
        temp1->data=ans[ind++];
        temp1=temp1->next;
    }
    return head;
}
int main()
{
     vector<int>arr={1,4,3,2,5,2};
     node* head=convert(arr);
      node* temp=partition(head,3);
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
}
