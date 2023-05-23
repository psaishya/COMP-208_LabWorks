#include<iostream>
#include"arrqueue.h"
using namespace std;

array_queue::array_queue(){
    frontindex=-1;
    backindex=-1;
}
int array_queue::enqueue(int data)
{
    
    if(isFull()){
        cout<<"Cannot enqueue "<<data<<".The queue is full. ";
        cout<<"The element at back is still ";
    }
   
    else{ 
        backindex=(backindex+1)%max;
        arr[backindex]=data;
        cout<<endl<<"Enqueued the element in "<<backindex<<":";        
    }
    
    if(backindex==0){
        frontindex=(frontindex+1)%max;
    }
    return arr[backindex];
}
int array_queue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Cannot dequeue.The queue is empty.";
        return 0;
    }
    else{
        cout<<endl<<"Dequeued element is ";
        int x=arr[frontindex];
        arr[frontindex]=0;
        frontindex=(frontindex+1)%max;
        return x;
    }
    
}
bool array_queue::isEmpty()
{
    return((frontindex==backindex)?1:0);
}
bool array_queue::isFull()
{
    // cout<<(backindex+1)%max;
    return((((backindex+1)%max)==frontindex)?1:0);
}
int array_queue::front()
{   
    return arr[frontindex];
}
int array_queue::back()
{
    return arr[backindex];
}
void array_queue::display()
{
    int x=frontindex;
    cout<<endl;
    int z=backindex;
    if(frontindex<=backindex){
         for(int i=x;i<z;i=(i+1)%max){
        
        // cout<<"index "<<i<<"="<<arr[i];
        cout<<"|"<<arr[i];
        }
    cout<<"|"<<arr[backindex];
    }
   
    else if(frontindex>backindex){
        for (int i=0;i<max;i++)
        {
            //  cout<<"index "<<i<<"="<<arr[i];
             cout<<"|"<<arr[i];
        }
     }
    cout<<endl;
}
