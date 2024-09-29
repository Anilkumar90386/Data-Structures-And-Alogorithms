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
node* convert_to_Arr(vector<int>&arr)
{
      node* head=new node(arr[0]);
      node* prev=head;
      for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
      }
      return head;
}
node* Reverse(node* head)
{
    node* temp=head;
    stack<int>st;
    while(temp!=NULL)      //Brute Force
    {
        st.push(temp->data);
        temp=temp->next;
    }
    node* temp1=head;
    while(temp1!=NULL)
    {
        temp1->data=st.top();
        st.pop();
        temp1=temp1->next;
    }
    return head;
}
node* Reverse_optimal(node* head)
{
    node* current=head;
    node* prev=NULL;
    while(current!=NULL)
    {
        prev=current->prev;
        current->prev=current->next;
        current->next=prev;
        current=current->back;
    }
    return prev->prev;
}
int main()
{
    vector<int>arr={10,11,12,13,14,15};
    node* head=convert_to_Arr(arr);
    node* temp=Reverse_optimal(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}