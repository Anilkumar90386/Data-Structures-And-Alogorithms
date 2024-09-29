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
// Node* Odd_Even(Node* head)
// {
//     Node* temp=head;
//     vector<int>arr;
//     while(temp!=NULL && temp->next!=NULL)
//     {
//         arr.push_back(temp->data);
//         temp=temp->next->next;
//     }
//     if(temp) arr.push_back(temp->data);
//     Node* temp1=head->next;
//     while(temp1!=NULL && temp1->next!=NULL)
//     {
//         arr.push_back(temp1->data);
//         temp1=temp1->next;
//     }
//     int i=0;Node* temp3=head;
//     while(temp3!=NULL)
//     {
//         temp3->data=arr[i];
//         i++;
//         temp3=temp3->next;
//     }
//     return head;
// }
Node* Odd_Ev(Node* head)
{
    if(head==NULL || head->next==NULL) return head;
    Node* odd=head;
    Node* even=head->next;
    Node* evenHead=head->next;
    while(even!=NULL && even->next!=NULL)
    {
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;
}
int main()
{
    vector<int>arr={10,30,23,1,2,10,2};
    Node* head=convertArr(arr);
    Node* temp=Odd_Ev(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}