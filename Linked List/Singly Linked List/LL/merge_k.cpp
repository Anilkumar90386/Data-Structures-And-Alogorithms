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
// Node* Remove(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL && temp->next!=NULL)
//     {
//         if(temp->data==temp->next->data)
//         {
//             Node* del=temp->next;
//             temp->next=temp->next->next;
//             free(del);
//         }
//         temp=temp->next;
//     }
//     return head;
// }
Node* mergeTwoLists(Node* l1, Node** l2) {
        Node dummy(INT_MIN);
        Node* tail = &dummy;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next = l1 ? l1 : l2;
        return dummy.next;
    }


Node* mergeKLists(vector<Node*>& lists) {
    Node* head=lists[0];
    for(int i=1;i<lists.size();i++)
    {
        head=mergeTwoLists(head,lists[i]);
    }
    return head;
 }
int main()
{
    vector<int>arr={1,1,2,3,3};
    Node* head=convertArr(arr);
    Node* temp=Remove(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
