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
// node* swap(node* head,int k)
// {
//      node* temp=head;
//      vector<int>arr;
//      while(temp!=NULL)
//      {
//         arr.push_back(temp->data);
//         temp=temp->next;
//      }
//      //{1,2,3,4,5}             TC - O(N)
//      int n=arr.size();         SC - O(N)
//      int i=k-1;
//      int j=n-k;
//      if(i<n && j>=0 && i!=j)
//      {
//         swap(arr[i],arr[j]);
//      }
//      node* temp1=head;
//      int ind=0;
//      while(temp1!=NULL)
//      {
//         temp1->data=arr[ind];
//         ind++;
//         temp1=temp1->next;
//      }
//      return head;
// }
// node* swap1(node* head,int k)
// {
//       node* temp1=head;
//       node* temp=head;
//       int cnt=1;
//       int firstnode;
//       int secondnode;
//       while(temp!=NULL)
//       {
//         cnt++;
//         if(cnt==k)
//         {
//             firstnode=temp->data;
//         }
//         temp=temp->next;
//       }
//       int cnt1=1;
//       while(temp1!=NULL)
//       {
//         cnt1++;
//         if(cnt1==4)
//         {
//             secondnode=temp1->data;
//         }
//         temp1=temp1->next;
//       }
//       swap(firstnode,secondnode);
//       return head;
// }
node* swapping(node* head,int k)
{
   node* first=head;
   node* second=head;
   node* fast=head;
   for(int i=1;i<k;i++)
   {
    fast=fast->next;
   }
   first=fast;
   while(fast->next!=NULL)
   {
    fast=fast->next;
    second=second->next;
   }
   swap(first->data,second->data);
   return head;
}
int main()
{
     vector<int>arr={7,9,6,6,7,8,3,0,9,5};
     node* head=convert(arr);
     node* temp=swapping(head,5);
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
}