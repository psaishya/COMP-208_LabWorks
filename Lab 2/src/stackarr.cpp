#include "stackarr.h"
#include<iostream>
using namespace std;
bool stack_array::isEmpty(){
    return((indexoftop==-1)?1:0);
} 

bool stack_array::isFull(){
    int x=sizeof(arr)/sizeof(int);
    return((indexoftop==x-1)?1:0);

}
int stack_array::push(int data){

    if (isFull()){
        cout<<endl<<"Cannot push "<<data<<".Stack is full.";
        cout<<"The element at top is still : ";
    }
    else{
        indexoftop++;
        arr[indexoftop]=data;
        cout<<endl<<"Pushed the element :";
    }
    return top();
}
int stack_array::pop(){
    if(isEmpty()){
        cout<<endl<<"Cannot be popped. Stack is empty";
    }
    else{
        indexoftop--;
        cout<<endl<<"Popped the element :";
    }
    return arr[indexoftop+1];
}
int stack_array::top(){
    return arr[indexoftop];
}
void stack_array::display()
{
    for(int i=0;i<=indexoftop;i++){
        cout<<"|"<<arr[i];
    }
}