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
        void addToHead(int info);
        void addToTail(int info);
        void add(int info, Node * predecessor);
        void removeFromHead();
        void remove(int info);
        Node * retrieve(int info, Node *outputNodePointer);
        bool search(int info);
        void traverse ();

};

#endif