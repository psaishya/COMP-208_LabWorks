#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
class Node 
{
    public:
        int data;
        Node * next;
        //Node();
        Node(int info=0,Node *next=NULL);
};
class LinkedList
{
    public:
        Node * HEAD;
        Node * TAIL;

        //LinkedList();
        LinkedList();

        bool isEmpty();
        void addToTail(int info);
        int removeFromHead();
        void traverse ();

};

#endif