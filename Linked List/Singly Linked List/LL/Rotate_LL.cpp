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
node* rotate_k(node* head,int k)
{
    node* tail=head;
    int len=0;
    while(tail->next!=NULL)
    {
        if(tail->next==NULL)
        {
            tail->next=head;
        }
        tail=tail->next;
    }
    node* temp=head;
    int cnt=1;
    node* newHead=NULL;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==len-k)
        {
            newHead=temp->next;
            temp->next=NULL;
        }
        temp=temp->next;
    }
   return newHead; 
}
int main()
{
     vector<int>arr={1,2,3,4,5};
     node* head=convert(arr);
     node* temp=rotate_k(head,2);
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
}