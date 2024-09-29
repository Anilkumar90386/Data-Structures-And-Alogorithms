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
node* converttoArr(vector<int>&arr)
{
    node* head=new node(arr[0]);
    node* temp=head;
    for(int i=1;i<arr.size();i++)
    {
        node* mover=new node(arr[i]);
        temp->next=mover;
        temp=mover;
    }
    return head;
}
node* Reverse(node* head)
{
    node* temp=head;
    node* prev=NULL;
    while(temp!=NULL)
    {
       node* front=temp->next;
       temp->next=prev;
       prev=temp;
       temp=front;
    }
    return prev;
}

int main()
{
   vector<int>arr={1,2,3,4,5};
   node* head=converttoArr(arr);
   node* temp=Reverse(head);
   while(temp!=NULL)
   {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
}