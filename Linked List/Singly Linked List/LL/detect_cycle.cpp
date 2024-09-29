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
node* converttoArr(vector<int>&arr)
{
    node* head=new node(arr[0]);
    node* mover=head;
   for(int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
// bool detect_loop(node* head){
//     node* temp=head;
//     map<node*,int>mpp;
//     while(temp!=NULL)
//     {
//         if(mpp.find(temp)!=mpp.end()) return true;
//         mpp[temp]=1;
//         temp=temp->next;
//     }
//     return false;
// }
bool detect_loop(node* head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}
int main()
{
    vector<int>arr={3,2,0,-4};
    node* head=converttoArr(arr);
    cout<<detect_loop(head);
    
}