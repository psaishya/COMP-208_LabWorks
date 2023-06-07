#include "bstarray.h"
using namespace std;
bstarrnode::bstarrnode(int key,int value){
    this->key=key;
    this->value=value;
}
bstarr::bstarr(){
    for(int i=0;i<=50;i++){
        this->array[i]=NULL;
        // this->array[i]->key=-1;
        // this->array[i]->value=-1;
       
    }
}
bool bstarr:: isempty(){
    return ((array[1]==NULL));
}
void bstarr::addBST(int key,int value){
    bstarrnode *newdata= new bstarrnode(key,value);
    for (int i=1;i<=50;){
        // bstarrnode *tobefilled=this->array[i];
         if(array[i]==NULL){
            array[i]= newdata;
            break;
        }
        else{
            if(key<array[i]->key){
                i=2*i;
            }
            else{i=2*i+1;}
        }
    }
}
// bstarrnode bstarr ::min(bstarrnode * root){

// }
// bstarrnode bstarr ::min(int rootindex){
 
//  }
int bstarr ::min(int rootindex){
    if(array[2*rootindex]== NULL && array[2*rootindex+1]==NULL){
            minindex= rootindex;
            return 1;
        }
    else if(array[2*rootindex]== NULL){
        min(2*rootindex+1);
    }
    else {
        
        min(2*rootindex);
    }
    return 1;
 } 
 
 
void bstarr::removeBST(int key){
    int dataindex=-1;
    for(int i=1;i<=50;i++){ 
        if(array[i]!=NULL){
            if(array[i]->key==key ){
            dataindex=i;
            break;
        }
        }
        
    }
    if(dataindex==-1){
        cout<<"Could not find data";
    }
    else{ 
        shift:
        if(array[2*dataindex]== NULL && array[2*dataindex+1]==NULL){
            array[dataindex]=NULL;
        }
        else if(array[2*dataindex]== NULL){
            int rightindex=2*dataindex+1;
            array[dataindex]=array[rightindex];
            array[2*dataindex]=array[2*rightindex];
            array[rightindex]=NULL;
            array[2*rightindex]=NULL;
            dataindex=rightindex;
            goto shift;
            // removeBST(array[rightindex]->key);
          
        
        }
        else if(array[2*dataindex+1]== NULL)
        {
            int leftindex=2*dataindex;
            array[dataindex]=array[leftindex];
            array[2*dataindex+1]=array[2*leftindex+1];
            array[leftindex]=NULL;
            array[2*leftindex+1]=NULL;
           
            dataindex=leftindex;
            goto shift;
            // removeBST(leftindex);
        }
        else{
            min(2*dataindex+1);
            array[dataindex]=array[minindex] ;
            array[minindex]=NULL;
        }
    }


}
bool bstarr::search(int searchkey){
    int result=0;
    for(int i=1;i<=50;i++){
      if(array[i]==NULL){
        
      }
      else{ 
        
        if(array[i]->key==searchkey){
            result= 1;
            break;
        }
      }
    }
    return result;
}
void bstarr::display(){
    int lastindex;
    for(int i=1;i<=50;i++){
        if(array[i]!=NULL){
            lastindex=i;
        }
    }
    for(int i=1;i<=lastindex;i++){
        if (array[i]==NULL){
            cout<<"|Key=-1 value=-1|";
        }
        else{
            cout<<"|Key="<<array[i]->key<<" value="<<array[i]->value<<"|";
        }
        
        
    }
}