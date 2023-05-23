#ifndef queue_h
#define queue_h
#include<iostream>

class queue
{
    public:
        queue(){}
        ~queue(){}
        virtual int enqueue(int data)=0;
        virtual int dequeue()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual int front()=0;
        virtual int back()=0;
        virtual void display()=0;





};
#endif