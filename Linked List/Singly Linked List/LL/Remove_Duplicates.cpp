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
Node* Remove(Node* head)
{
    Node* temp=head->next;
    Node* prev=head;
    while(temp!=NULL)
    {
        if(temp->data==prev->data)
        {
            temp=temp->next;
            prev->next=temp;
            continue;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
// Node* Remove(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL && temp->next!=NULL)
//     {
//         Node* nextNode=temp->next;
//         while(nextNode!=NULL && nextNode->data==temp->data)
//         {
//             nextNode=nextNode->next;
//         }
//         temp->next=nextNode;
//         temp=temp->next;
//     }
//     return head;
// }
int main()
{
    vector<int>arr={1,1,3};
    Node* head=convertArr(arr);
    Node* temp=Remove(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}