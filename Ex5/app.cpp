#include "header.h"
using namespace std;

int main(){
    PrintQueue pq= PrintQueue();
    int f=1;
    while(f!=0){
        int ch;
        cout << "1) Add new print job\n2) Finish print job\n3) Clear queue\n4) Show queue\n5) Exit" << endl;
        cin >> ch;
        switch(ch){
            case 1:{
                cout << "Enter job ID: ";
                int name;
                cin >> name;
                Node* newJob= new Node(name, NULL);
                pq.Enqueue(newJob);
                break;
            }
            case 2:
            pq.Dequeue();
            break;
            case 3:
            pq.emptyPrintQueue();
            break;
            case 4:
            pq.displayQueue();
            break;
            case 5:{
            cout << "Quitting." << endl;
            f=0;
            break;
            }
            default:
            cout << "Invalid choice!" << endl;
        } 
    }
}