#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=nullptr;
    }
};
node* convertToArr(vector<int>&arr)
{
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
node* swap_pairs(node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    node* new_head = head->next; 
    node* prev = NULL;
    node* curr = head;

    while (curr != NULL && curr->next != NULL) {
        node* next = curr->next;
        node* next_next = next->next;
        next->next = curr;
        curr->next = next_next;
        if (prev != NULL)
            prev->next = next;
        prev = curr;
        curr = next_next;
    }

    return new_head;
}
int main()
{
     vector<int> arr={1,2,3,4};
     node* head=convertToArr(arr);
    node* temp=swap_pairs(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}