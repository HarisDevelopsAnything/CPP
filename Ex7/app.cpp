#include <iostream>
#include "header.h"

using namespace std;

int main() {
    AVLTreeADT tree;
    int choice, value;

    while (true) {
        cout << "1) Insert value" << endl;
        cout << "2) Display Inorder" << endl;
        cout << "3) Display Preorder" << endl;
        cout << "4) Display Postorder" << endl;
        cout << "5) Search for value" << endl;
        cout << "6) Clear tree" << endl;
        cout << "7) Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                tree.root= tree.insertion(tree.root, value);
                break;
            case 2:
                if(tree.root == NULL){
                    cout << "Tree is empty" << endl;
                    break;
                }
                cout << "Inorder Traversal: ";
                if(tree.root)
                tree.inorder(tree.root);
                cout << endl;
                break;
            case 3:
                if(tree.root == NULL){
                    cout << "Tree is empty" << endl;
                    break;
                }
                cout << "Preorder Traversal: ";
                tree.preorder(tree.root);
                cout << endl;
                break;
            case 4:
                if(tree.root == NULL){
                    cout << "Tree is empty" << endl;
                    break;
                }
                cout << "Postorder Traversal: ";
                tree.postorder(tree.root);
                cout << endl;
                break;
            case 5:
                cout << "Enter value to search: ";
                cin >> value;
                if (tree.search(tree.root, value)) {
                    cout << value << " found in the tree." << endl;
                } else {
                    cout << value << " not found in the tree." << endl;
                }
                break;
            case 6:
                if(tree.root!=NULL)
                tree.makeEmpty(tree.root);
                cout << "Tree cleared." << endl;
                tree.root= NULL;
                break;
            case 7: 
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
