#include <iostream>
using namespace std;

class AStack
{
	int top;
	int capacity;
	int *arr;
	public:
	AStack();
	AStack(int);
	~Astack();
	void push(int);
	void pop();
	int top();
	bool isFull();
	bool isEmpty();
	void makeStackEmpty();
}
void evaluate(char*);
