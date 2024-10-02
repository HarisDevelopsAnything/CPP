#include "header.h"

BSTTreeNode::BSTTreeNode(){
    leftChild= NULL;
    rightChild= NULL;
    info= 0;
}
BSTTreeNode::~BSTTreeNode(){
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
void BSTTreeADT::insertion(int ele){
    BSTTreeNode* temp= root;
    BSTTreeADT* newNode= new BSTTreeADT(ele);
    while(temp!=NULL){
        if(temp->data < ele){
            if(temp->right==NULL){
                temp->right = newNode;
                cout << "Node inserted!" << endl;
                return;
            }
            else
            temp= temp->right;
        }
        else if(temp->data > ele){
            if(temp->left==NULL){
                temp->left = newNode;
                cout << "Node inserted!" << endl;
                return;
            }
            else
            temp= temp->left;
        }
        else{
            cout << "Element present!" << endl;
            return;
        }
    }
}
void BSTTreeADT::deletion(int ele){
    BSTTreeNode* parent= root;
    BSTTreeNode* temp= root;
    while(temp!=NULL){
        if(temp->data < ele){
            if(temp->right==NULL){
                temp->right = newNode;
                cout << "Node inserted!" << endl;
                return;
            }
            else
            temp= temp->right;
        }
        else if(temp->data > ele){
            if(temp->left==NULL){
                temp->left = newNode;
                cout << "Node inserted!" << endl;
                return;
            }
            else
            temp= temp->left;
        }
        else{
            cout << "Element present!" << endl;
            return;
        }
    }
}