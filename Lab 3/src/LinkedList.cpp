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

int LinkedList::removeFromHead()
{
    Node *nodetodelete=new Node;
    nodetodelete=HEAD;
    int x=nodetodelete->data;
    HEAD=nodetodelete->next;
    delete nodetodelete;
    return x;
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

