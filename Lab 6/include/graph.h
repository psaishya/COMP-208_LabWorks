#ifndef graph_h
#define graph_h
struct vertex{
    char vertexName;
    int position;
};
class graph
{
    public:
        bool directed;
        int numofvertex;
        int arr[10][10];
        graph(bool directed=0);
        vertex vertices[10];

        bool isEmpty();
        bool isDirected();
        void addVertex(char newVertex);
        void removeVertex(char vertexToBeRemoved);
        void addEdge(char vertex1,char vertex2);
        void removeEdge(char vertex1,char vertex2);
        int numVertex();
        int numEdge();
        int inDegree(char vertex1);
        int outDegree(char vertex1);
        int degree(char vertex1);
        void neighbours(char vertex1);
        bool isNeighbour(char vertex1,char vertex2);

        void display();
        bool presenceofvertex(char vertex);
        int giveposn(char vertex);
};
#endif