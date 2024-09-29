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
Node *detectCycle(ListNode *head) {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                slow=head;
                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
int main()
{
    vector<int>arr={10,2,3,4,1};
    Node* head=convertArr(arr);
    // Node* temp=head;
    // while(temp!=NULL) 
    // {
    //     cout<<temp->data;
    //     temp=temp->next;
    // }
}