#include <iostream>
#include "bst.h"
#include "bstarray.h"
#include "linkedBst.h"
#include "BstNode.h"
using namespace std;
int main()
{   
    bst *arr;
    int choice;
    cout<<"Do you want to implement bst using 1)array or 2)linked list? "<<endl;
    cin>>choice;
    if(choice==1){
        arr=new bstarr;
    }
    else if(choice==2){
       arr=new LinkedListBST();  
    }
    cout<<"Is it empty? ";
    cout<< ((arr->isempty()==1)?"True":"False")<<endl;
    // arr->display();
    cout<<"Adding a node"<<endl;
    arr->addBST(3,4);
    cout<<"Is it empty? ";
    cout<< ((arr->isempty()==1)?"True":"False")<<endl;
//    arr->display();
    arr->addBST(5,4);
    arr->addBST(9,3);
    arr->addBST(1,0);
    arr->addBST(13,1);
    arr->addBST(2,1);
    arr->addBST(0,1);
    arr->addBST(7,5);

    arr->display();

    cout<<endl<<"Is 7 there?"<< ((arr->search(7))?" Yes":" No");
    cout<<endl<<"Is 36 there?"<< ((arr->search(36))?" Yes":" No");
    
    cout<<endl<<"Removing 0"<<endl;
    arr->removeBST(0);
    arr->display();

    cout<<endl<<"Removing 5"<<endl;
    arr->removeBST(5);
    arr->display();

    cout<<endl<<"Removing 3"<<endl;
    arr->removeBST(3);
    arr->display();



}