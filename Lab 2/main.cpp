#include<iostream>
#include <stack.h>
#include <stackarr.h>
#include <stackll.h>
using namespace std;

int main()
{
    stack* st;
    stack* sarr=new stack_array;
    stack* sll=new stack_linkedlist;


    int choice;
    cout<<"Do you want to implement stack with 1)array or 2)linked list?";
    cin>>choice;

    if(choice==1){
        st=sarr;
    }
    else{
        st=sll;
    }
    
    
    // st->pop();
    
    cout<<endl<<"Is it empty?"<<st->isEmpty();

    cout<<endl<<"Is it full?"<<st->isFull();
    
    cout<<st->pop();
    
    cout<<st->push(20)<<endl;
    st->display();

    cout<<st->push(30)<<endl;
    st->display();

    cout<<st->push(40)<<endl;
    st->display();

    cout<<st->push(50)<<endl;
    st->display();

    cout<<st->pop()<<endl;
    st->display();

    cout<<st->push(60)<<endl;
    st->display();

    cout<<st->push(70)<<endl;
    st->display();

    cout<<st->push(80)<<endl;
    st->display();

    cout<<st->pop()<<endl;
    st->display();

    cout<<st->pop()<<endl;
    st->display();

    cout<<endl<<"Element at top? :"<<st->top();

    


}


