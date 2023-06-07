#ifndef BstNode_h
#define BstNode_h
#include <iostream>
#include "bst.h"

class BstNode {
private:
    int key;
    int value;
    BstNode* parent;
    BstNode* LeftChild;
    BstNode* RightChild;

public:
    BstNode(int key, int value, BstNode* parent=nullptr, BstNode* LeftChild=nullptr, BstNode* RightChild=nullptr);
    BstNode();
   

   
    int GetKey() { return this->key; }
    int GetValue() {return this->value; }
    BstNode* GetLeftChild() { return this->LeftChild; }
    BstNode* GetRightChild() { return this->RightChild; }
    BstNode* GetParent() { return this->parent; }

    void AssignValue(int value) { this->value = value; };
    void AssignKey(int key) { this->key = key; };
    void AssignLeftChild(BstNode* child) { this->LeftChild = child; }
    void AssignRightChild(BstNode* child) {this->RightChild  = child; }
    void AssignParent(BstNode* parent) { this->parent = parent; }

    

};

#endif