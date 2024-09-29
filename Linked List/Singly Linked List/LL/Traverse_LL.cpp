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
int main()
{
    vector<int>arr={10,2,3,4,1};
    Node* head=convertArr(arr);
    Node* temp=head;
    while(temp!=NULL) 
    {
        cout<<temp->data;
        temp=temp->next;
    }
}