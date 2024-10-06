#include<iostream>
using namespace std;
class BSTTreeNode{
    public:
    int info;
    BSTTreeNode* leftChild;
    BSTTreeNode* rightChild;
    BSTTreeNode();
    BSTTreeNode(int);
};
class BSTTreeADT{
    public:
    BSTTreeNode* root;
    BSTTreeADT();
    void insertion(BSTTreeNode*&, int);
    BSTTreeNode* deletion(BSTTreeNode*, int);
    BSTTreeNode* search(BSTTreeNode*, int);
    BSTTreeNode* findMin(BSTTreeNode*);
    BSTTreeNode* findMax(BSTTreeNode*);
    void makeEmpty(BSTTreeNode*&);
    void inorder(BSTTreeNode*);
    void preorder(BSTTreeNode*);
    void postorder(BSTTreeNode*);
    void display(BSTTreeNode*);
};