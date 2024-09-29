#include <bits/stdc++.h>
using namespace std;
struct node
{
public:
    int data;
    node *next;
    node *back;
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node *convert(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
node *Delete_First(node *head)
{
    node *temp = head;
    node *prev = head;
    head = head->next;
    prev = prev->next;
    free(temp);
    return head;
}
node* Delete_Last(node* head)
{
    node* tail=head;
    node* prev=NULL;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    free(tail);
    return head;
}
node* Delete_Kth(node* head,int k)
{
     node* temp=head;
     int cnt=0;
     while(temp!=NULL)
     {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
     }
     node* prev=temp->back;
     node* front=temp->next;
     if(prev==NULL && front==NULL)
     {
        return  NULL;
     }
     else if(prev==NULL) 
     {
        return Delete_First(head);
     }
     else if(front==NULL)
     {
        return Delete_Last(head);
     }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    return head;
}
int main()
{
    vector<int> arr = {10, 11, 12, 13, 14};
    node *head = convert(arr);
    node *temp = Delete_Kth(head,5);
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}