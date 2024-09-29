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
node* delete_node(node* head)
{
    vector<int>nums={1,2,3};
    node* temp=head;
    int i=0;
    while(temp!=NULL)
    {
        if(temp->data==nums[i])
        {
            node* Node=temp;
            free(Node);
        }
        temp=temp->next;
        i++;
    }
    return head;
}
int main()
{
     vector<int>arr={1,2,3,4,5};
     node* head=convert(arr);
     node* temp=delete_node(head);
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
}