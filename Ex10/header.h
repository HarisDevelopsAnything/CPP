#include<iostream>
#include <queue>
#include <stack>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Graph
{
    int *Data;
    int noOfVertices;
    bool *visited;
    int **adjMatrix;
    public:
    int rand();
    Graph(int numOfVertices);
    void createGraph();
    void printadjacent();
    void performDFS();
    void performBFS();
    int* getData();
    void display();
};