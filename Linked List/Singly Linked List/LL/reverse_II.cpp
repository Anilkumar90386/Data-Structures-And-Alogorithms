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
node* convertToArr(vector<int>&arr)
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
node* Reverse_II(node* head,int left,int right)
{
   node* temp=head;
   node* prev=NULL;
   int cnt=1;
   while(temp!=NULL)
   {
     cnt++;
     if(cnt==left)
     {
        
     }
     prev=temp;
     temp=temp->next;
   }
   return head;
}
int main()
{
    vector<int> arr={1,2,3,4,5};
     node* head=convertToArr(arr);
    node* temp=Reverse_II(head,2,4);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}