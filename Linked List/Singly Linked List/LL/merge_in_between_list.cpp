#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* converttoArr(vector<int>&arr)
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

Node* merge(Node* head1, Node* head2, int a, int b) {
    if (!head1 || !head2) return head1; 

    Node* temp1 = head1;
    Node* start = nullptr;
    Node* end = nullptr;
    
  
    int cnt = 0;
    while (temp1 && cnt < b) {
        if (cnt == a - 1) {
            start = temp1;
        }
        if (cnt == b) {
            end = temp1->next;
        }
        temp1 = temp1->next;
        cnt++;
    }
    
    if (start) {
        start->next = head2; 
    }
    
    Node* temp2 = head2;
    while (temp2->next) {
        temp2 = temp2->next;
    }
    
    if (temp2) {
        temp2->next = end; 
    }
    
    return head1;
}
int main()
{
    vector<int>arr1={10,1,13,6,9,5};
    vector<int>arr2={1000,10001,10002};
    Node* head1=converttoArr(arr1);
    Node* head2=converttoArr(arr2);   
    Node* temp=merge(head1,head2,3,4);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}