#include "header.h"

int main(){
    cout << "Enter the size of graph: ";
    int n;
    cin >> n;
    Graph graph= Graph(n);
    graph.createGraph();
    cout << "1) Print adjacent elements 2) DFS 3) BFS 4) Display 5) Exit" << endl;
    int ch=0;
    while(ch!=5){
    cout << "Enter your choice: ";
    cin >> ch;
    switch(ch){
        case 1:{
            graph.printadjacent();
            break;
        }
        case 2:{
            graph.performDFS();
            break;
        }
        case 3:{
            graph.performBFS();
            break;
        }
        case 4:{
            graph.display();
            break;
        }
        case 5:{
            cout << "Exiting." << endl;
            break;
        }
        default:
        cout << "Invalid choice!";
    }
    }
}