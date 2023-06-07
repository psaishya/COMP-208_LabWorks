#ifndef bst_h
#define bst_h
#include <iostream>

class bst
{
    public:
    virtual bool isempty()=0;
    virtual void addBST(int key,int value)=0;
    virtual void removeBST(int key)=0;
    virtual bool search(int key)=0;
    // virtual bstarrnode min (bstarrnode *node)=0;
    virtual void display()=0;
 
};
#endif