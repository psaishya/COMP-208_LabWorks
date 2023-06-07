#ifndef bstarray_h
#define bstarray_h
#include "bst.h"

struct bstarrnode{
    public:
    int key;
    int value;
    bstarrnode(int key=-1 , int value=-1);
}; 

class bstarr:public bst{
    
    public:
   
    bstarrnode * array[51];
    bstarr();
    int minindex;
    // bstarr(int key,int value);
    bool isempty();
    void addBST(int key,int value);
    void removeBST(int key);
    bool search(int key);
    // bstarrnode min (bstarrnode *node);
    // bstarrnode min (int rootindex);
    int min (int rootindex);
    void display();

};


#endif