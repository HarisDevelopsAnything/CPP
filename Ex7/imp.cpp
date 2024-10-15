#include <iostream>
#include "header.h" 

using namespace std;

AVLTreeNode::AVLTreeNode() {
    info = 0;
    leftChild = NULL;
    rightChild = NULL;
    height = 0;
}
AVLTreeNode::AVLTreeNode(int value) {
    info = value;
    leftChild = NULL;
    rightChild = NULL;
    height = 0;
}
AVLTreeADT::AVLTreeADT() {
    root = NULL;
}
AVLTreeNode* AVLTreeADT::insertion(AVLTreeNode* node, int value) {
    if (node == NULL) {
        return new AVLTreeNode(value);
    }
    if (value < node->info) {
        node->leftChild = insertion(node->leftChild, value);
    } else if (value > node->info) {
        node->rightChild = insertion(node->rightChild, value);
    } else {
        return node; 
    }
    node->height = findHeight(node);
    int balance = findHeight(node->leftChild) - findHeight(node->rightChild);
    if (balance > 1 && value < node->leftChild->info) {
        return singleRightRot(node);
    }
    if (balance < -1 && value > node->rightChild->info) {
        return singleLeftRot(node);
    }
    if (balance > 1 && value > node->leftChild->info) {
        node->leftChild = singleLeftRot(node->leftChild);
        return singleRightRot(node);
    }
    if (balance < -1 && value < node->rightChild->info) {
        node->rightChild = singleRightRot(node->rightChild);
        return singleLeftRot(node);
    }
    return node;
}
AVLTreeNode* AVLTreeADT::singleLeftRot(AVLTreeNode* node) {
    AVLTreeNode* newRoot = node->rightChild;
    node->rightChild = newRoot->leftChild;
    newRoot->leftChild = node;
    node->height = findHeight(node);
    newRoot->height = findHeight(newRoot);
    return newRoot;
}
AVLTreeNode* AVLTreeADT::singleRightRot(AVLTreeNode* node) {
    AVLTreeNode* newRoot = node->leftChild;
    node->leftChild = newRoot->rightChild;
    newRoot->rightChild = node;
    node->height = findHeight(node);
    newRoot->height = findHeight(newRoot);
    return newRoot;
}
AVLTreeNode* AVLTreeADT::doubleLeftRot(AVLTreeNode* node) {
    node->rightChild = singleRightRot(node->rightChild);
    return singleLeftRot(node);
}
AVLTreeNode* AVLTreeADT::doubleRightRot(AVLTreeNode* node) {
    node->leftChild = singleLeftRot(node->leftChild);
    return singleRightRot(node);
}
int AVLTreeADT::findHeight(AVLTreeNode* node) {
    if (node == NULL) {
        return -1;
    }
    return max(findHeight(node->leftChild), findHeight(node->rightChild)) + 1;
}
void AVLTreeADT::makeEmpty(AVLTreeNode* node) {
    if (node!=NULL) {
        makeEmpty(node->leftChild);
        makeEmpty(node->rightChild);
        delete node;
        node= NULL;
    }
}
void AVLTreeADT::inorder(AVLTreeNode* node) {
    if (node) {
        inorder(node->leftChild);
        cout << node->info << " ";
        inorder(node->rightChild);
    }
}
void AVLTreeADT::preorder(AVLTreeNode* node) {
    if (node) {
        cout << node->info << " ";
        preorder(node->leftChild);
        preorder(node->rightChild);
    }
}
void AVLTreeADT::postorder(AVLTreeNode* node) {
    if (node) {
        postorder(node->leftChild);
        postorder(node->rightChild);
        cout << node->info << " ";
    }
}
AVLTreeNode* AVLTreeADT::search(AVLTreeNode* node, int value) {
    if (node == NULL || node->info == value) {
        return node;
    }
    if (value < node->info) {
        return search(node->leftChild, value);
    }
    return search(node->rightChild, value);
}
void AVLTreeADT::display(AVLTreeNode* node) {
    inorder(node);
}

