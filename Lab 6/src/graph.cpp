#include<iostream>
#include "graph.h"
using namespace std;
graph::graph(bool directed){
    this->directed=directed;
    numofvertex=0;
    for(int i=0;i<10;i++){
        vertices[i].vertexName='-';
        for(int j=0;j<10;j++){
            arr[i][j]=0;
        }
    }
}
int graph::giveposn(char vertex1){
    int a;
    for(int i=0; i<this->numofvertex;i++){
        if(vertices[i].vertexName==vertex1)
        {
            a=vertices[i].position;
        }
    }
    return a;
}
bool graph::isDirected(){
    
    return this->directed;
}
int graph::numVertex(){
    return this->numofvertex;
}
bool graph::isEmpty(){
    if (numofvertex==0){return 1;} 
    else{return 0;};
}
bool graph::presenceofvertex(char vertex){
    for(int i=0; i<numofvertex;i++){
        if(vertices[i].vertexName==vertex){
            return 1;
        }
        
    }
    return 0;
}
void graph::addVertex(char newVertex){
    for(int i=0; i<10;i++){
        if(vertices[i].vertexName=='-'){

            vertices[i].vertexName=newVertex;
            vertices[i].position=i;
            numofvertex++;
            break;
        }
       
    }
    

}
void graph::removeVertex(char vertexToBeRemoved){
    int a;
    if (presenceofvertex(vertexToBeRemoved)!=true) {
        cout << "\nVertex not present!";
        return;
    }
    else {
        a=giveposn(vertexToBeRemoved);
        

        vertices[a].vertexName='-';
    
        for(int j=0;j<=numofvertex;j++)
        {
            arr[a][j]=-1;
            arr[j][a]=-1;
        }
    }

}
void graph::addEdge(char vertex1,char vertex2){
    int check1=presenceofvertex(vertex1);
    int check2=presenceofvertex(vertex2);
    if(check1==1 && check2==1){
        int a,b;
        for(int i=0; i<this->numofvertex;i++){
            if(vertices[i].vertexName==vertex1){
                a=vertices[i].position;
            }
            if(vertices[i].vertexName==vertex2){
                b=vertices[i].position;
            }
        }   
        arr[a][b]=1;
        if(!isDirected())
            {arr[b][a]=1;}
        cout<<"Edge added"<<endl;  
    }   
    else{
        cout<<"Could not find the vertex."<<endl;
    }
}

void graph::removeEdge(char vertex1,char vertex2){
    int check1=presenceofvertex(vertex1);
    int check2=presenceofvertex(vertex2);

    if(check1==1 && check2==1){
        int a,b;
        for(int i=0; i<this->numofvertex;i++){
            if(vertices[i].vertexName==vertex1){
                a=vertices[i].position;
            }
            if(vertices[i].vertexName==vertex2){
                b=vertices[i].position;
            }
        }
        if(!isDirected()){
            arr[b][a]=0;
        }
        arr[a][b]=0;
    
    }
    else{
        cout<<"Could not find vertex "<<endl;
    }
    
}
int graph::numEdge(){
    int numofedge=0;
        for(int i=0;i<numofvertex;i++){
            for(int j=0;j<numofvertex;j++){
                if(arr[i][j]==1){
                    numofedge++;
                }
            }
        }
        if(isDirected()){
            return numofedge;
        }
        else{
            return numofedge/2;
        }
    
}
int graph::inDegree(char vertex1){
    int flag=0;
    
    if(presenceofvertex(vertex1))
    {
        int a=giveposn(vertex1);
        for (int i=0;i<=numofvertex;i++)
        {
            if (arr[i][a]==1){
                flag=flag+1;
            }
        }
        return flag;

    }else{
        cout<<"No Such Vertex";
        return -1;
    }
    
    

}
int graph::outDegree(char vertex1){
    int flag=0;
    
    if(presenceofvertex(vertex1))
    {
        int a=giveposn(vertex1);
        for (int i=0;i<=numofvertex;i++)
        {
            if (arr[a][i]==1){
                flag=flag+1;
            }
        }
        return flag;

    }else{
        cout<<"No Such Vertex";
        return -1;
    }
    

}
int graph::degree(char vertex1){
    int flag;
    int factor;
    factor = (isDirected()) ? 1 : 2;
    return  flag=(inDegree(vertex1)+outDegree(vertex1))/factor;

}
void graph::neighbours(char vertex1){
    
    if(presenceofvertex(vertex1))
    {
        int a=giveposn(vertex1);
        for(int i=0;i<=numofvertex;i++)
        {
            if(arr[a][i]==1)
            {
                cout<<vertices[i].vertexName<<"  ";
            }
        }
        cout<<endl;
    }
    return;
    
    
    
    

}
bool graph::isNeighbour(char vertex1,char vertex2){
    if(presenceofvertex(vertex1)&&presenceofvertex(vertex2))
    {
        int a=giveposn(vertex1);
        int b=giveposn(vertex2);
        
        if(arr[a][b]==1)
        {
            return 1;
        }
        
        
    }
    return 0;

}
void graph::display(){
    if(isEmpty()){cout<<"Empty graph"<<endl;}
    else{
    cout<<endl;
    cout<<"     ";
    for(int k=0;k<numofvertex;k++){
        cout<<vertices[k].vertexName<<"    ";
    }

    cout<<endl;
    for(int i=0;i<numofvertex;i++){
        cout<<vertices[i].vertexName<<"    ";

        for(int j=0;j<numofvertex;j++){
            cout<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
    }
    
}