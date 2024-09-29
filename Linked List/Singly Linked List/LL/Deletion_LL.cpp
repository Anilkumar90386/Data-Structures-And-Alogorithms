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
Node* DeleteHead(Node* head)
{
    if(head==NULL) return NULL;
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
Node* DeleteTail(Node* head)
{
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}
Node* DeletePosition(Node* head,int k)
{
    if(head==NULL) return head;
    if(k==1)
    {
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    int cnt=0;
    Node* prev=NULL;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int>arr={10,30,23,1,2,10,2};
    Node* head=convertArr(arr);
    Node* temp=DeletePosition(head,3);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}