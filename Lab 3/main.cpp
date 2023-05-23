#include<iostream>
#include "arrqueue.h"
#include "llqueue.h"
using namespace std;
int main()
{   queue *qptr;
    queue * aq=new array_queue;
    queue * llq=new linkedlist_queue;
    int choice;
    cout<<"1)ARRAY  2)LINKEDLIST";
    cin>>choice;
    if(choice==1){
        qptr=aq;
    }
    else{
        qptr=llq;
    }
    int x;
    
    cout<<"Is the queue empty?"<<qptr->isEmpty()<<endl;
    cout<<"Is the queue full?"<<qptr->isFull()<<endl;

    cout<<qptr->dequeue();

    cout<<qptr->enqueue(5);
    qptr->display();

    cout<<qptr->enqueue(10);
    qptr->display();

    cout<<qptr->enqueue(15);
    qptr->display();

    cout<<qptr->enqueue(20);
    qptr->display();

    cout<<qptr->enqueue(25);
    qptr->display();

    cout<<endl<<"Is it full?"<<qptr->isFull()<<endl;
    
    cout<<qptr->enqueue(30);
    qptr->display();

    cout<<qptr->dequeue();
    qptr->display();
    
    cout<<qptr->dequeue();
    qptr->display();

     cout<<qptr->enqueue(35);
    qptr->display();

 cout<<qptr->enqueue(40);
    qptr->display();
    cout<<endl<<"The element at front is "<<qptr->front()<<". And element at back is "<<qptr->back();

}