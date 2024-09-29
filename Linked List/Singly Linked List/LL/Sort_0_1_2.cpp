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
Node* sort(Node* head)
{
    Node* temp=head;
    int cnt0=0,cnt1=0,cnt2=0;
    while(temp!=NULL)
    {
        if(temp->data==0) cnt0++;
        else if(temp->data==1) cnt1++;
        else   cnt2++;
        temp=temp->next;
    }
    Node* temp1=head;
    while(temp1!=NULL)
    {
        if(cnt0){
            temp1->data=0;
            cnt0--;
        }
        else if(cnt1)
        {
            temp1->data=1;
            cnt1--;
        }
        else{
            temp1->data=2;
            cnt2--;
        }
        temp1=temp1->next;
    }
    return head;
}
Node* sort_optimal(Node* head)
{
    Node* dummyZero=new Node(-1);
    Node* dummyOne=new Node(-1);
    Node* dummyTwo=new Node(-1);
    Node* temp=head;
    Node* Zero=dummyZero;
    Node* One=dummyOne;
    Node* Two=dummyTwo;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
           Zero->next=temp;
           Zero=temp;
        }
        else if(temp->data==1)
        {
            One->next=temp;
            One=temp;
        }
        else{
            Two->next=temp;
            Two=temp;
        }
         temp=temp->next;
    }
    Zero->next=(dummyOne->next)?dummyOne->next:dummyTwo->next;
    One->next=dummyTwo->next;
    Two->next=NULL;
    Node* newHead=dummyZero->next;
    free(dummyZero);
    free(dummyOne);
    free(dummyTwo);
    return newHead;
}
int main()
{
    vector<int>arr={0,1,0,1,2,0,1,2};
    Node* head=convertArr(arr);
    Node* temp=sort_optimal(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}