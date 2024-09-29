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
Node* merge_Nodes(Node* head)
{
   Node* temp=head;
   int sum=0;
   vector<int>ans;
   while(temp!=NULL)
   {
     if(temp->data!=0)
     {
        sum=sum+temp->data;
     }
     else{
        if(temp==head)
        {

        }
        else{
             ans.push_back(sum);
             sum=0;
        }
     }
     temp=temp->next;
   } 
   Node* newHead=new Node(0);
    Node* current = newHead;
    
    for (int value : ans) {
        current->next = new Node(value);
        current = current->next;
    }
    
    return newHead->next;
}
int main()
{
    vector<int> arr = {0,1,0,3,0,2,2,0};
    Node *head = convertArr(arr);
   Node* temp=merge_Nodes(head);
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}