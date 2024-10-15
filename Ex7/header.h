class AVLTreeNode{
    public:
    int info;
    AVLTreeNode* leftChild;
    AVLTreeNode* rightChild;
    int height;
    AVLTreeNode();
    AVLTreeNode(int);
};
class AVLTreeADT{
    public:
    AVLTreeNode* root;
    AVLTreeADT();
    AVLTreeNode* insertion(AVLTreeNode*, int);
    AVLTreeNode* singleLeftRot(AVLTreeNode*);
    AVLTreeNode* singleRightRot(AVLTreeNode*);
    AVLTreeNode* doubleLeftRot(AVLTreeNode*);
    AVLTreeNode* doubleRightRot(AVLTreeNode*);
    int findHeight(AVLTreeNode* node);
    void makeEmpty(AVLTreeNode*);
    void inorder(AVLTreeNode*);
    void preorder(AVLTreeNode*);
    void postorder(AVLTreeNode*);
    AVLTreeNode* search(AVLTreeNode*, int);
    void display(AVLTreeNode*);
};