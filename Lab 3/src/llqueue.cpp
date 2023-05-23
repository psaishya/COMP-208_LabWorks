#include<iostream>
#include"llqueue.h"
#include"LinkedList.h"
using namespace std;
linkedlist_queue::linkedlist_queue()
{
 
    l.HEAD=NULL;
    l.TAIL=NULL;
}
int linkedlist_queue::enqueue(int data)
{
    
    if (isFull()){
        cout<<endl<<"Cannot enqueue "<<data<<". It is full.The back element is still"<<endl;
    }
    else{
        l.addToTail(data);
        noOfNodes++;
        cout<<endl<<"Enqueued element : ";
    }
        
    return back();

}
int linkedlist_queue::dequeue(){
    int x;
    if(isEmpty()){
        cout<<"Cannot dequeue.It is empty.";
    }
    else
    {
        x=l.removeFromHead();
        noOfNodes--;
        cout<<endl<<"Dequeued element : ";
    }
    return x;
}
bool linkedlist_queue::isEmpty(){
    return l.isEmpty();
    
}
bool linkedlist_queue::isFull(){
    return((noOfNodes==totalNodes)?1:0);
}
int linkedlist_queue::front(){
    return((l.HEAD->data));
}
int linkedlist_queue::back(){
    return((l.TAIL->data));
}
void linkedlist_queue::display(){
    cout<<endl;
    l.traverse();
}

