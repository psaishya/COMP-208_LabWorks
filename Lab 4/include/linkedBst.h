#ifndef linkedBst_h
#define linkedBst_h
#include <iostream>
#include "BstNode.h"


#include "bst.h"



class LinkedListBST: public BstNode, public bst {
private:
    BstNode* root;
public:
    LinkedListBST(BstNode* root = nullptr);
    BstNode* getRoot() { return this->root; } 

    bool isempty();

    void addBST(int key, int value);

    void removeBST(int key);
    void removeBST(int key, BstNode* subtree);
    bool max(int &outputKey);
    bool min(int &outputKey);
    bool exists(int targetKey);

    bool search (int key);
    BstNode* findBstNode(int targetKey, BstNode* subtree);
    BstNode* findBstNode(int tragetKey);
    bool max(BstNode* subtree, int& output);
    void display();
    bool min(BstNode* subtree, int& output);
   void InPreorder(BstNode* root);


    
    
    

};

#endif