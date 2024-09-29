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
Node* Delee_Node(Node* head,vector<int>&nums)
{
    Node* temp=head;
    vector<int>arr;
    int i=0;
   
    while (temp != NULL && i < nums.size()) {
        if (temp->data == nums[i]) {
            arr.push_back(temp->data);
            i++;
        }
        temp = temp->next;
    }

    Node* temp1=head;
    int j=0;
    while(temp1!=NULL && j<arr.size())
    {
        temp1->data=arr[j];
        j++;
        temp1=temp1->next;
    }
    return head;
}
int main()
{
    vector<int>arr={10,30,23,1,2,10,2};
    vector<int>nums={10,20,23};
    Node* head=convertArr(arr);
    Node* temp=Odd_Even(head,nums);
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}