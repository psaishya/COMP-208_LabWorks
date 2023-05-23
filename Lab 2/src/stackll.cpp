#include "stackll.h"
#include<iostream>
using namespace std;
Node::Node(int data,Node *next)
{ 
    this->data=data;
    this->next=NULL;
}
bool stack_linkedlist::isEmpty()
{
    return((HEAD==NULL)?1:0);

}
bool stack_linkedlist::isFull()
{
    return((no_of_Nodes_present>=no_of_Nodes)?1:0);
    
}
int stack_linkedlist::pop()
{
    Node* nodeToDel=HEAD;
    if(isEmpty()){
        cout<<endl<<"Cannot be popped. Stack is empty";
    }
    else{
        HEAD=HEAD->next;
        cout<<endl<<"Popped the element :";
        no_of_Nodes_present--;
        return nodeToDel->data;

    }
    return 0;

}
int stack_linkedlist::push(int data)
{  
    if(isFull())
    {
        cout<<endl<<"Cannot push "<<data<<".Stack is full.";
        cout<<"The element at top is still : ";
    }
    else{
        Node *newNode=new Node;
        newNode->data=data;
        newNode->next=HEAD;
        HEAD=newNode;
        no_of_Nodes_present++;
        cout<<endl<<"Pushed the element :";
    }
    return HEAD->data;
}
int stack_linkedlist::top()
{
    return HEAD->data;
}
void stack_linkedlist::display()
{
    for(Node *x=HEAD;x!=NULL;x=x->next){
        cout<<"|"<<x->data<<"| -|-->";
    }
    
}
