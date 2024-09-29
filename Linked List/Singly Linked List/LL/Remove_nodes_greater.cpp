#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convertArr(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* Reverse(Node* head)
{
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL)
    {
       Node* front=temp->next;
       temp->next=prev;
       prev=temp;
       temp=front;
    }
    return prev;
}
Node *Remove_Nodes(Node *head)
{
    Node* newhead=Reverse(head);
    Node *temp = newhead;
    int maxi = newhead->data;
    Node *temp1 = newhead;
    Node *newHead = newhead;
    temp=temp->next;
    while (temp != NULL)
    {
        if (temp->data >= maxi)
        {
            maxi = temp->data;
            temp1->next = temp;
            temp1 = temp1->next;
        }
        temp = temp->next;
    }
    temp1->next=NULL;
    Node* Head=Reverse(newhead);
    return Head;
}
int main()
{
    vector<int> arr = {5,2,1,13,3,8};
    Node *head = convertArr(arr);
    Node *temp = Remove_Nodes(head);
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}