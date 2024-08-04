#include <iostream>

class A_List {
	public:
		A_List();
		A_List(int*, int, int);
		A_List(const A_List &);
		~A_List();
		int insertAtFirst(int);
		int insertAtLast(int);
		int insertByPos(int, int);
		int isFull();
		int isEmpty();
		int find(int);
		int displayList();
		int printReverse();
		int makeListEmpty();
	private:
		int *arr;
		int size;
		int capacity;
};
