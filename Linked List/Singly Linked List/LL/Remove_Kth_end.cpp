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
Node* Remove_Kth(Node* head,int k)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    Node* temp1=head;
    while(temp1!=NULL)
    {
        if(cnt==k+1)
        {
            temp1->next=temp1->next->next;
        }
        cnt--;
        temp1=temp1->next;
    }
    return head;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    Node* head=convertArr(arr);
    Node* temp=Remove_Kth(head,2);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}