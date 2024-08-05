#include "header.h"
using namespace std;
int main(){
	A_List a= A_List();
	cout << "Welcome to ListManager!" << endl;
	cout << "1) Insert element at last\n2) Insert element at first\n3) Insert by position\n4) Show list\n5) Find element\n6) Clear list\n7) Exit" << endl;
	int ch;
	while(ch!=7)
	{
	cout << "Enter your choice: ";
	cin >> ch;
	switch(ch) {
		case 1:
			{
			cout << "Enter element: ";
			int e;
			cin >> e;
			int o= a.insertAtLast(e);
			if(o==0)
				cout << "List already full!" << endl;
			else
				cout << "Added successfully." << endl;
			break;
			}
		case 2:
			{
			cout << "Enter element: " << endl;
			int e;
			cin >> e;
			int o= a.insertAtFirst(e);
			if(o==0)
				cout << "List is full!" << endl;
			else
				cout << "Added successfully." << endl;
			break;
			}
		case 3:
			{
				cout << "Enter the pos: " << endl;
				int p,e;
				cin >> p;
				cout << "Enter element: " << endl;
				cin >> e;
				int o= a.insertByPos(p,e);
				if(o==0)
					cout << "Can't insert!" << endl;
				else
					cout << "Inserted successfully." << endl;
			break;
			}
		case 4:
			{
				cout << "Current list: " << endl;
				a.displayList();
				break;
			}
		case 5:
			{
				cout << "Enter the element to find: ";
				int e;
				cin >> e;
				int p= a.find(e);
				if(p!=-1)
					cout << "Element found at position " << p << endl;
				else
					cout << "Element not found." << endl;
				break;
			}
		case 6:
			{
				cout << "Do you want to clear the list? (y/N): ";
				char ch;
				cin >> ch;
				if(ch=='y' || ch=='Y')
					a.makeListEmpty();
				break;
			}
		case 7: 
			{
				cout << "Exitting." << endl;
				break;
			}
		default:
			{
				cout << "Error." << endl;
				break;
			}
	}
	}
}
