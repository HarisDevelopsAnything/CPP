#include<iostream>
using namespace std;
class PriHeap{
    int capacity;
    int hsize;
    int* data;
    public:
    PriHeap(int);
    void enqueue(int);
    void dequeue();
    bool isFull();
    bool isEmpty();
    int& findMax();
    bool search(int);
};