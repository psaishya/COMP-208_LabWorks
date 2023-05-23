#ifndef stackll_h
#define stackll_h
#include "stack.h"
#include <iostream>

class Node
{
    public:
        int data;
        Node *next;
        Node(int data=0,Node *next=NULL);
}; 


class stack_linkedlist:public stack
{
    public:
        Node * HEAD;
        int no_of_Nodes=5;
        int no_of_Nodes_present=0;

        stack_linkedlist(){
            HEAD=NULL;
            
        };
        int push(int data);
        int pop();
        bool isEmpty();
        bool isFull();
        int top();
        void display();

};


#endif