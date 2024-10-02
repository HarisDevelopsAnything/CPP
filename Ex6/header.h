#include<iostream>
using namespace std;
class BSTTreeNode{
    int info;
    BSTTreeNode* leftChild;
    BSTTreeNode* rightChild;
    public:
    BSTTreeNode();
    BSTTreeNode(int);
    ~BSTTreeNode();
};
class BSTTreeADT{
    BSTTreeNode* root;
    public:
    BSTTreeADT();
    ~BSTTreeADT();
    void insertion(int);
    void deletion(int);
    BSTTreeNode* search(int);
    BSTTreeNode* findMin();
    BSTTreeNode* findMax();
    void makeEmpty();
    void inorder();
    void preorder();
    void postorder();
    void display();
};