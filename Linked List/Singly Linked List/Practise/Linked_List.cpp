#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};
node *convertToArr(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
bool search(node *head, int x)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (x == temp->data)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
node *Delete_first(node *head)
{
    node *temp = head;
    head = temp->next;
    free(temp);
    return head;
}
node *Delete_End(node *head)
{
    node *temp = head;
    node *current = NULL;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
node *Delete_Position(node *head, int k)
{
    node *temp = head;
    int cnt = 0;
    node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
node *Insert_first(node *head)
{
    node *newnode = new node(0);
    newnode->next = head;
    return newnode;
}
node *Insert_End(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new node(7);
    return head;
}
node *Insert_Pos(node *head, int k)
{
    node *temp = head;
    node *prev = NULL;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            node *newnode = new node(0);
            newnode->next = temp;
            prev->next = newnode;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
node *Even_Odd(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *EvenS = NULL;
    node *EvenE = NULL;
    node *OddS = NULL;
    node *OddE = NULL;
    node *temp = head;
    while (temp != NULL)
    {
        int val = temp->data;
        if (val % 2 == 0)
        {
            if (EvenS == NULL)
            {
                EvenS = temp;
                EvenE = EvenS;
            }
            else
            {
                EvenE->next = temp;
                EvenE = EvenE->next;
            }
        }
        else
        {
            if (OddS == NULL)
            {
                OddS = temp;
                OddE = OddS;
            }
            else
            {
                OddE->next = temp;
                OddE = OddE->next;
            }
        }
        temp = temp->next;
    }

    OddE->next = EvenS;
    EvenE->next = NULL;
    return OddS;
}
node *swap_nth_start_end(node *head, int k)
{
    node *fast = head;
    node *first = head;
    node *second = head;
    for (int i = 1; i < k; i++)
    {
        fast = fast->next;
    }
    first = fast;
    while (fast->next != NULL)
    {
        fast = fast->next;
        second = second->next;
    }
    swap(first->data, second->data);
    return head;
}
node *Reverse(node *head)
{
    node *temp = head;
    node *prev = NULL;
    while (temp != NULL)
    {
        node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
node *middle_node(node *head)
{
    node *slow = head;
    node *fast = head;
    node *middle = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
// bool Detect_Cycle(node* head)
// {
//     //Brute Force - Using map
//    map<node*,int>mpp;
//    node* temp=head;
//    while(temp!=NULL)
//    {
//        mpp[temp]++;
//        if(mpp.find(temp)!=mpp.end())
//        {
//         return true;
//        }
//        mpp[temp]=1;
//        temp=temp->next;
//    }
//    return false;
//     node* fast=head;
//     node* slow=head;
//     while(fast!=NULL && fast->next!=NULL)  //Optimal
//     {
//         fast=fast->next->next;
//         slow=slow->next;
//         if(slow==fast) return true;
//     }
//     return false;
// }
int getLength(node *slow, node *fast)
{
    int cnt = 0;
    while (fast != slow)
    {
        cnt++;
        fast = fast->next;
    }
    return cnt;
}
int length_loop(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return getLength(slow, fast);
        }
    }
    return 0;
}
node *start_node_loop(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            slow = head;
            while (fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }
    return 0;
}
node* Delete_present(node *head)
{
   vector<int>arr={1,2,3};
   unordered_set<int>Todelete(arr.begin(),arr.end());
   node* dummy=new node(-1);
   dummy->next=head;
   node* prev=dummy;
   node* temp=head;
   while(temp!=NULL)
   {
     if(Todelete.find(temp->data)!=Todelete.end())
     {
        prev->next=temp->next;
     }
     else{
        prev=temp;
     }
     temp=temp->next;
   }
   return dummy->next;
 
}
node* Remove_Duplicates(node* head)
{
    node* temp=head;
    node* dummy=new node(-1);
    dummy->next=head;
    node* prev=dummy;
    while(temp!=NULL)
    {
        node* front=temp->next;
        if(temp->data==front->data)
        {
            prev->next=front->next;
            temp=front->next;
        }
        else{
            prev=temp;
        }
        temp=temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 4, 4,5};
    node *head = convertToArr(arr);
    node* temp= Remove_Duplicates(head);
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}