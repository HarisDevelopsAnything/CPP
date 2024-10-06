#include "header.h"

// Main function to demonstrate the BST functionality
int main() {
    BSTTreeADT tree;
    cout << "Trying insert..." << endl;
    tree.insertion(tree.root, 50);
    tree.insertion(tree.root,30);
    tree.insertion(tree.root,20);
    tree.insertion(tree.root,40);
    tree.insertion(tree.root,70);
    tree.insertion(tree.root,60);
    tree.insertion(tree.root,80);
    cout << "Insert successful." << endl;
    tree.display(tree.root);
    cout << "Display passed" << endl;
    tree.deletion(tree.root, 20);
    cout << "\nAfter deleting 20:\n";
    tree.display(tree.root);
    tree.deletion(tree.root, 30);
    cout << "\nAfter deleting 30:\n";
    tree.display(tree.root);
    tree.deletion(tree.root, 10);
    tree.display(tree.root);
    tree.deletion(tree.root, 50);
    cout << "\nAfter deleting 50:\n";
    tree.deletion(tree.root, 80);
    tree.makeEmpty(tree.root);
    tree.display(tree.root);

    return 0;
}