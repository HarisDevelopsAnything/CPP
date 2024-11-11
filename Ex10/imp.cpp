#include "header.h"

using namespace std;

// Constructor for the Graph class
Graph::Graph(int numOfVertices)
{
    noOfVertices = numOfVertices;
    Data = new int[numOfVertices];  // Array to store data (could be vertex identifiers or other data)
    visited = new bool[numOfVertices]; // Array to track visited vertices during traversal
    adjMatrix = new int*[numOfVertices];  // 2D adjacency matrix

    // Initialize the adjacency matrix to 0 (no edges)
    for (int i = 0; i < numOfVertices; i++) {
        adjMatrix[i] = new int[numOfVertices]();
    }
    
    // Initialize the visited array to false
    for (int i = 0; i < numOfVertices; i++) {
        visited[i] = false;
    }
}

// Random number generator for graph data or edges
int Graph::rand()
{
    return std::rand() % 100;  // Simple random number generation
}

// Function to create the graph, adding edges randomly between vertices
void Graph::createGraph()
{
    srand(time(0));  // Seed the random number generator with current time
    for (int i = 0; i < noOfVertices; i++) {
        Data[i] = rand();  // Assign some random data to each vertex
        
        for (int j = i + 1; j < noOfVertices; j++) {
            // Randomly decide whether to create an edge between vertex i and j
            if (rand() % 2 == 0) {
                adjMatrix[i][j] = 1;  // Edge from i to j
                adjMatrix[j][i] = 1;  // Edge from j to i (undirected graph)
            }
        }
    }
}

// Function to print the adjacency matrix
void Graph::printadjacent()
{
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < noOfVertices; i++) {
        for (int j = 0; j < noOfVertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Perform Depth-First Search (DFS) on the graph
void Graph::performDFS()
{
    // Reset visited array before DFS
    for (int i = 0; i < noOfVertices; i++) {
        visited[i] = false;
    }

    // Stack-based DFS implementation
    stack<int> s;
    s.push(0);  // Start DFS from vertex 0
    visited[0] = true;

    cout << "DFS Traversal: ";
    while (!s.empty()) {
        int vertex = s.top();
        s.pop();
        cout << vertex << " ";

        // Visit all unvisited adjacent vertices
        for (int i = 0; i < noOfVertices; i++) {
            if (adjMatrix[vertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                s.push(i);
            }
        }
    }
    cout << endl;
}

// Perform Breadth-First Search (BFS) on the graph
void Graph::performBFS()
{
    // Reset visited array before BFS
    for (int i = 0; i < noOfVertices; i++) {
        visited[i] = false;
    }

    // Queue-based BFS implementation
    queue<int> q;
    q.push(0);  // Start BFS from vertex 0
    visited[0] = true;

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        cout << vertex << " ";

        // Visit all unvisited adjacent vertices
        for (int i = 0; i < noOfVertices; i++) {
            if (adjMatrix[vertex][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

// Get the data array
int* Graph::getData()
{
    return Data;
}

// Display the graph (vertices and edges)
void Graph::display()
{
    cout << "Graph Representation:" << endl;
    for (int i = 0; i < noOfVertices; i++) {
        cout << "Vertex " << i << " has data: " << Data[i] << endl;
        cout << "Adjacent vertices: ";
        for (int j = 0; j < noOfVertices; j++) {
            if (adjMatrix[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
