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
Node* merge_node(Node* head)
{
    Node* temp=head;
    Node* dummyNode=new Node(-1);
    while(temp!=NULL)
    {
        if(temp->data!=0)
    }
}
int main()
{
    vector<int>arr={10,30,23,1,2,10,2};
    Node* head=convertArr(arr);
    Node* temp=middle_node(head);
   cout<<temp->data;
}