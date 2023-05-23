#ifndef llqueue_h
#define llqueue_h
#include "queue.h"
#include"LinkedList.h"
#include <iostream>
// class Node{
//     public:
//         int data;
//         Node* next;
//         Node(int data=0,Node *next=NULL);
// };

class linkedlist_queue:public queue{
    public: 
        // Node *HEAD, *TAIL;
        LinkedList l;
        int totalNodes=5;
        int noOfNodes=0;
        linkedlist_queue();
        int enqueue(int data);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
        void display();

};

#endif