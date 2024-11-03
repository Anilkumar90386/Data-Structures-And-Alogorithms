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
int connected(Node* head)
{
    Node* temp=head;
    int ind=0;
    int cnt=1;
    vector<int>nums={0,3,1,4};
    
    while(temp!=NULL)
    {
        if(temp->data==nums[ind])
        {
            ind++;  
        }
        else{
            cnt++;          
        }
        temp=temp->next;
    }
    return cnt;
}
int main()
{
    vector<int>arr={0,1,2,3,4};
    Node* head=convertArr(arr);
    cout<<connected(head);
}