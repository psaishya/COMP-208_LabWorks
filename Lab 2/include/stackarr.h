#ifndef stackarr_h
#define stackarr_h
#include "stack.h"
#include <iostream>

class stack_array:public stack
{
    public: 
        
        int indexoftop;
        int arr[5];
        stack_array()
        {
            indexoftop=-1;
        }
        int push(int data);
        int pop();
        bool isEmpty();
        bool isFull();
        int top();
        void display();
};


#endif