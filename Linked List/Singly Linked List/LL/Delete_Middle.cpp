#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
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
Node* Delete_Middle(Node* head)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    int n=cnt%2==0 ? cnt/2 :(cnt/2)+1;
    Node* temp1=head;
    while(temp1!=NULL)
    {
        if(cnt==n+1)
        {
            temp1->next=temp1->next->next;
        }
        cnt--;
        temp1=temp1->next;
    }
    return head;
}
Node* Delete(Node* head)
{
    Node* slow=head;
    Node*fast=head;
    fast=fast->next->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;
    return head;
}
int main()
{
    vector<int>arr={2,1};
    Node* head=convertArr(arr);
    Node* temp=Delete(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}