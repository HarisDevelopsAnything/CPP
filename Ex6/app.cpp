#include "header.h"
int main() {
    int op, n;
    BSTTreeADT bt = BSTTreeADT();
    cout << "1) Insert\n2) Delete\n3) Inorder\n4) Preorder\n5) Postorder\n6) Search\n7) Show max and min\n8) Exit" << endl;
    while (true) {
        cout << "Enter your choice: ";
        cin >> op;
        switch (op) {
            case 1: {
                cout << "Enter the element to insert: ";
                cin >> n;
                BSTTreeNode* node = new BSTTreeNode(n);
                if (bt.root == nullptr)
                    bt.root = node;
                bt.insertion(bt.root, n);
                cout << "Element inserted.\n";
                break;
            }
            case 2: {
                cout << "Enter element to delete: ";
                cin >> n;
                BSTTreeNode* temp = bt.deletion(bt.root, n);
                if (temp != nullptr)
                    cout << "Element deleted.\n";
                else
                    cout << "The given element not found\n";
                break;
            }
            case 3: {
                cout << "Inorder: ";
                bt.inorder(bt.root);
                cout << endl;
                break;
            }
            case 4: {
                cout << "Preorder: ";
                bt.preorder(bt.root);
                cout << endl;
                break;
            }
            case 5: {
                cout << "Postorder: ";
                bt.postorder(bt.root);
                cout << endl;
                break;
            }
            case 6: {
                cout << "Enter element to search: ";
                cin >> n;
                BSTTreeNode* temp = bt.search(bt.root, n);
                if (temp != nullptr)
                    cout << "Element found\n";
                else
                    cout << "Element not found\n";
                break;
            }
            case 7: {
                cout << "Max element: " << bt.findMax(bt.root)->info << endl;
                cout << "Min element: " << bt.findMin(bt.root)->info << endl;
                break;
            }
            case 8: {
                cout << "Exiting..." << endl;
                exit(0);
            }
            default:
            cout << "Invalid choice!\n";
        }
    }
}