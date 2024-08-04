#include "header.h"
using namespace std;
int main(){
	A_List a= A_List();
	cout << "Welcome to ListManager! Enter your choice:" << endl;
	cout << "1) Insert element at last\n2) Insert element at first\n3) Insert by position\n4) Show list\n5) Clear list" << endl;
	int ch;
	cin >> ch;
	switch(ch) {
		case 1:
			cout << "Enter element: ";
			int e;
			cin >> e;
			int o= a.insertAtLast(e);
			if(o==0)
				cout << "List already full!" << endl;
			else
				cout << "Added successfully." << endl;
			break;
		case 2:
			cout << "Enter element: " << endl;
			break;
		default:
			cout << "Error." << endl;
	}
}
