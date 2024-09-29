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
// Node* Remove(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL && temp->next!=NULL)
//     {
//         if(temp->data==temp->next->data)
//         {
//             Node* del=temp->next;
//             temp->next=temp->next->next;
//             free(del);
//         }
//         temp=temp->next;
//     }
//     return head;
// }
vector<int> Remove(Node* head,int val)
{
    vector<int>arr;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data!=val)
        {
            arr.push_back(temp->data);
        }
        free(node);
        temp=temp->next;
    }
    return arr;
    
}
int main()
{
    vector<int>arr={1,2,6,3,4,5,6};
    Node* head=convertArr(arr);
    Node* temp=Remove(head,6);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}