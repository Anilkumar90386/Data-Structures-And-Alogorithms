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
node* greatest_common(node* head)
{
    if(head==NULL || head->next==NULL) return head;
    node* temp=head->next;
    node* prev=head;
    while(temp!=NULL)
    {
        int maxi=0;
        for(int i=1;i<=temp->data;i++)
        {
            if(temp->data%i==0 && prev->data%i==0)
            {
                maxi=max(maxi,i);
            }
        }
        node* newnode=new node(maxi);
        newnode->next=temp;
        prev->next=newnode;
        prev=temp;
        temp=temp->next;
    }
   return head;
}
int main()
{
     vector<int> arr={18,6,10,3};
     node* head=convertToArr(arr);
    node* temp=greatest_common(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}