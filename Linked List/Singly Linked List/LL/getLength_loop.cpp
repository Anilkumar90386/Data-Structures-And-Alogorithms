#include<bits/stdc++.h>
using namespace std;
struct Node{
public:
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
    Node* temp=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* mover=new Node(arr[i]);
        temp->next=mover;
        temp=mover;
    }
    return head;
}
int getlength(Node* slow,Node* fast)
{
    int cnt=0;
    while(slow!=fast)
    {
        cnt++;
        slow=slow->next;
    }
    return cnt;
}
int detect_cycle(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return getlength(slow,fast);
        }
    }
    return 0;
}
int main()
{
    vector<int>arr={3,2,0,-4};
    Node* head=convertArr(arr);
    cout<<detect_cycle(head);
    // while(temp!=NULL) 
    // {
    //     cout<<temp->data;
    //     temp=temp->next;
    // }
}