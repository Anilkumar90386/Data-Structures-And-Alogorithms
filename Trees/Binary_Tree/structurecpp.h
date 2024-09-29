#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

#endif 