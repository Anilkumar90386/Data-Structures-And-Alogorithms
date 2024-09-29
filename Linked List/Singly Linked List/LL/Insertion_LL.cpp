#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* convertArr(vector<int>&arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* Insert_First(Node* head)
{
    Node* temp=new Node(10,head);
    return temp;
}
Node* Insert_Last(Node* head)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new Node(3);
    return head;
}
Node* Insert_Position(Node* head,int k)
{
   if(head==NULL) return new Node(10);
   int cnt=0;
   Node* temp=head;
   while(temp!=NULL)
   {
     cnt++;
     if(cnt==k-1)
     {
         Node* x=new Node(10);
         x->next=temp->next;
         temp->next=x;
     }
     temp=temp->next;
   }
   return head;
}
int main()
{
    vector<int>arr={30,23,1,2,10,2};
    Node* head=convertArr(arr);
    Node* temp=Insert_Position(head,2);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}