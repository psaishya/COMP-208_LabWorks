#ifndef stack_h
#define stack_h
#include <iostream>

class stack
{
    public: 
        stack(){};
        ~stack(){};
        virtual int push(int data)=0;
        virtual int pop()=0;
        virtual bool isEmpty()=0;
        virtual bool isFull()=0;
        virtual int top()=0;
        virtual void display()=0;
};



#endif
