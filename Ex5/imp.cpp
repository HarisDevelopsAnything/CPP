#include "header.h"
using namespace std;
Node::Node(){
    jobid= 0;
    next= NULL;
}
Node::Node(int dat, Node* ptr){
    jobid= dat;
    next= ptr;
}
PrintQueue::PrintQueue(){
    first=NULL;
}
void PrintQueue::displayQueue(){
    Node* temp= first;
    cout << "Current jobs:" << endl;
    int i=0;
    while(temp->next!=NULL){
        cout << i << "\tJob: " << temp->jobid << endl;
        temp= temp->next;
        i++; 
    }
    cout << i << "\tJob: " << temp->jobid << endl;
}
void PrintQueue::Enqueue(Node* node){
    Node* temp= first;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next= node;
    cout << "Print job added successfully." << endl;
}
void PrintQueue::Dequeue(){
    if(isEmpty()){
        cout << "Queue is empty!" << endl;
        return;
    }
    Node* temp= first;
    first=first->next;
    cout << "Print job " << temp->jobid << "completed." << endl;
}
void PrintQueue::emptyPrintQueue(){
    while(!isEmpty()){
        Dequeue();
    }
    cout << "All print jobs removed!" << endl;
}
bool PrintQueue::isEmpty(){
    if(first==NULL)
    return true;
    return false;
}