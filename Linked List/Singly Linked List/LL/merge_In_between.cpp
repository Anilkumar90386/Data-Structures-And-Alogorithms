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
void merge_in(node* head1,node* head2,int a,int b)
{
    node* temp1=head1;
    node* temp2=head2;
    int cnt=0;
    node* prev=NULL;
    while(temp1!=NULL)
    {
        cnt++;
        if(cnt==a)
        {
          prev=temp1;
          temp1->next=head2;
        }
        cout<<temp1->data<<" ";
        prev=prev->next;
        temp1=temp1->next;
    }
    temp1->next=prev;
    
} 
int main()
{
    vector<int> arr1={10,1,13,6,9,5};
    vector<int>arr2={100,101,102};
    node* head1=convertToArr(arr1);
    node* head2=convertToArr(arr2);
    merge_in(head1,head2,3,4);
    // while(temp1!=NULL)
    // {
    //     cout<<temp1->data<<" ";
    //     temp1=temp1->next;
    // }
}