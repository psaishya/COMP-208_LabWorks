#include "LinkedList.h"
#include<iostream>
using namespace std;

Node::Node(int info,Node *next)
{ 
    this->data=info;
    this->next=NULL;
}
LinkedList::LinkedList()
{
    this->HEAD=NULL;
    this->TAIL=NULL;
   
} 
bool LinkedList::isEmpty()
{
    bool ans=(HEAD==NULL)?1:0;
    return ans;
   
} 
void LinkedList:: addToHead(int info)
{
    Node *newNode=new Node;
    newNode->data=info;
    if(HEAD==NULL)
    {
        HEAD=newNode;
        TAIL=newNode;
    }
    else{
        newNode->next=HEAD;
        HEAD=newNode;
    }
}
void LinkedList:: addToTail(int info)
{
    Node *newNode=new Node;
    newNode->data=info;
    newNode->next=NULL;
    if(TAIL!=NULL){
        TAIL->next=newNode;
        TAIL=newNode;
    }
    else{
        HEAD=newNode;
        TAIL=newNode;
    }
    
    
}
void LinkedList:: add(int info, Node * predecessor)
{
    Node *newNode=new Node;
    newNode->data=info;
    newNode->next=predecessor->next;
    predecessor->next=newNode;

}
void LinkedList::removeFromHead()
{
    Node *nodetodelete=new Node;
    nodetodelete=HEAD;
    cout<<endl<<"Node to delete(i.e HEAD)is "<<nodetodelete->data<<endl;
    HEAD=nodetodelete->next;
    delete nodetodelete;
}
void LinkedList:: remove(int info)
{
    int check=0;
    for(Node *x=HEAD;x->next!=NULL;x=x->next)
    {

        Node *nextofx=x->next;
        if(nextofx->data==info)
        {
            x->next=nextofx->next;
            delete nextofx;
            check=1;
            break;
        }
        else
        {
            check=0;
        }

    }
    if(check==1)
    {
        cout<<endl<<"The node is deleted. ";
        cout<<"List after deletion is: ";
    }
    else{
        cout<<"Could not find node with that data";
    }
    cout<<endl;


}
Node* LinkedList:: retrieve(int info, Node *outputNodePointer)
{
    for(Node *x=HEAD;x!=NULL;x=x->next)
    {
        if(x->data==info)
        {
            cout<<endl<<"x="<<&(x->data)<<endl;
            outputNodePointer=x;
            break;
        }
        
    }
    return outputNodePointer;
}
bool LinkedList:: search(int info)
{
    bool y;
    for(Node *x=HEAD;x!=NULL;x=x->next)
    {
        y=(x->data==info)?true:false;
        if (y==true){
            break;
        }
    }
    return y;
}
void LinkedList:: traverse ()
{
    for(Node *x=HEAD;x!=NULL;x=x->next)
    {   
        
        cout<<"|"<<x->data<<"|"<<" -|";
        if(x->next!=NULL)
        {
            cout<<"--->";
        }
    }

}

