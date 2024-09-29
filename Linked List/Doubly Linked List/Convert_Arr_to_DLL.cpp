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
node* convert(vector<int>&arr)
{
   node* head=new node(arr[0]);
   node* prev=head;
   for(int i=1;i<arr.size();i++)
   {
       node* temp=new node(arr[i],nullptr,prev);
       prev->next=temp;
       prev=temp;   
   }
   return head;
}
int main()
{
      vector<int>arr={10,11,12,13,14};
      node* head=convert(arr);
      node* temp=head;
      while(temp!=NULL)
      {
         cout<<temp->data<<" ";
         temp=temp->next;
      }
}