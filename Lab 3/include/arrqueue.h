#ifndef arrqueue_h
#define arrqueue_h
#include "queue.h"
#include <iostream>

class array_queue:public queue{
    public:
        int frontindex,backindex,max=5;
        int *arr=new int[max];

        array_queue();
        
        int enqueue(int data);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
        void display();
        
    


};




#endif