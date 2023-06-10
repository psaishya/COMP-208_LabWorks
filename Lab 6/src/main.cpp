#include<iostream>
#include "graph.h"
using namespace std;
int main(){
    cout<<"Is the graph directed? 0->not directed  1->directed"<<endl;
    int dir;
    cin>>dir;
    graph G(dir);
    cout<<G.numofvertex;
    cout<<endl<<"Is it empty?"<<((G.isEmpty())?"True":"False")<<endl;
    cout<<"Displaying graph"<<endl;
    G.display();
    cout<<"Adding vertices in graph"<<endl;
    G.addVertex('A');
    G.addVertex('B');
    G.addVertex('C');
    G.addVertex('D');
    G.addVertex('E');
    cout<<endl<<"The number of vertices are:"<<G.numofvertex;

    cout<<"Adding edge A-B in graph"<<endl;
    G.addEdge('A','B');
    cout<<"Adding edge C-B in graph"<<endl;
    G.addEdge('C','B');
    cout<<"Adding edge B-D in graph"<<endl;
    G.addEdge('B','D');
    cout<<"Adding edge C-E in graph"<<endl;
    G.addEdge('C','E');
    cout<<"Adding edge A-D in graph"<<endl;
    G.addEdge('A','D');
    cout<<"Adding edge E-B in graph"<<endl;
    G.addEdge('E','B');

    cout<<"Displaying graph"<<endl;
    G.display();
    cout<<endl<<"Is it directed?"<<((G.isDirected())?"True":"False")<<endl;
    cout<<endl<<"The number of edges in graph are"<<G.numEdge()<<endl;
    
    cout<<"Removing edge E-B in graph"<<endl;
    G.removeEdge('E','B');
    G.display();

    cout<<endl<<"Indegree of B is "<<G.inDegree('B');
    cout<<endl<<"Outdegree of B is "<<G.outDegree('B');
    cout<<endl<<"Total degree of B is "<<G.degree('B');

    cout<<endl<<"Removing vertex E in graph"<<endl;
    G.removeVertex('E');
    G.display();



}