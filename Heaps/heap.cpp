#include<bits/stdc++.h>
using namespace std;
class Heap{
   public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0]=-1;
        size=0;
    }
    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void deleteElement()
    {
        if(size==0){
            cout<<"nothing to delete";
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size)
        {
            int left=2*i;
            int right=2*i+1;
            if(left<size && arr[i]<arr[left])
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(right<size && arr[i]<arr[right])
            {
                swap(arr[i],arr[right]);
                i=right;
            }
        }
    }
     void print()
    {
        for(int i=0;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
   Heap h;
   h.insert(50);
   h.insert(52);
   h.insert(51);
   h.insert(55);
   h.insert(54);
   h.print();
   h.deleteElement();
   h.print();
}