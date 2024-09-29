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
int length(Node* head)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    vector<int>arr={10,30,23,1,2,10,2};
    Node* head=convertArr(arr);
    cout<<length(head);
}