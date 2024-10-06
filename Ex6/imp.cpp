#include "header.h"

BSTTreeNode::BSTTreeNode(){
    leftChild= NULL;
    rightChild= NULL;
    info= 0;
}
BSTTreeNode::BSTTreeNode(int ele){
    leftChild= NULL;
    rightChild= NULL;
    info= ele;
}
BSTTreeADT::BSTTreeADT(){
    root= NULL;
}
void BSTTreeADT::insertion(BSTTreeNode*& node, int val) {
        if (!node) {
            node = new BSTTreeNode(val);
        } else if (val < node->info) {
            insertion(node->leftChild, val);
        } else if (val > node->info) {
            insertion(node->rightChild, val);
        }
    }
BSTTreeNode* getSuccessor(BSTTreeNode* curr)
{
    curr = curr->rightChild;
    while (curr != NULL && curr->leftChild != NULL)
        curr = curr->leftChild;
    return curr;
}
BSTTreeNode* BSTTreeADT::deletion(BSTTreeNode* root, int x)
{

    // Base case
    if (root == NULL)
        return root;

    // If info to be searched is in a subtree
    if (root->info > x)
        root->leftChild = deletion(root->leftChild, x);
    else if (root->info < x)
        root->rightChild = deletion(root->rightChild, x);

    // If root matches with the given info
    else {

        // Cases when root has 0 children
        // or only rightChild child
        if (root->leftChild == NULL) {
            BSTTreeNode* temp = root->rightChild;
            delete root;
            return temp;
        }

        // When root has only leftChild child
        if (root->rightChild == NULL) {
            BSTTreeNode* temp = root->leftChild;
            delete root;
            return temp;
        }

        // When both children are present
        BSTTreeNode* succ = getSuccessor(root);
        root->info = succ->info;
        root->rightChild = deletion(root->rightChild, succ->info);
    }
    return root;
}



BSTTreeNode* BSTTreeADT::search(BSTTreeNode* node, int val) {
        if (!node || node->info == val) return node;
        if (val < node->info) return search(node->leftChild, val);
        return search(node->rightChild, val);
    }
    BSTTreeNode* BSTTreeADT::findMin(BSTTreeNode*){
        BSTTreeNode* temp= root;
        while(temp->leftChild!=NULL){
            temp=temp->leftChild;
        }
        return temp;
    }
    BSTTreeNode* BSTTreeADT::findMax(BSTTreeNode*){
        BSTTreeNode* temp= root;
        while(temp->rightChild!=NULL){
            temp=temp->leftChild;
        }
        return temp;
    }
    void BSTTreeADT::inorder(BSTTreeNode* node) {
        if (!node) return;
        inorder(node->leftChild);
        cout << node->info << " ";
        inorder(node->rightChild);
    }

    void BSTTreeADT::preorder(BSTTreeNode* node) {
        if (!node) return;
        cout << node->info << " ";
        preorder(node->leftChild);
        preorder(node->rightChild);
    }

    void BSTTreeADT::postorder(BSTTreeNode* node) {
        if (!node) return;
        postorder(node->leftChild);
        postorder(node->rightChild);
        cout << node->info << " ";
    }
    void BSTTreeADT::makeEmpty(BSTTreeNode*& node) {
        if (!node) return;
        makeEmpty(node->leftChild);
        makeEmpty(node->rightChild);
        delete node;
        node = nullptr;
    }
    void BSTTreeADT::display(BSTTreeNode* node) {
        inorder(node);
        cout << endl;
    }