#include<iostream>
#include<cstring>
using namespace std;
class Node{
    public:
    int jobid;
    Node* next;
    Node();
    Node(int, Node*);
};
class PrintQueue{
    Node* first;
    public:
    PrintQueue();
    void Enqueue(Node*);
    void Dequeue();
    bool isEmpty();
    void emptyPrintQueue();
    void displayQueue();
};