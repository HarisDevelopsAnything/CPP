#include "header.h"

AStack::AStack(){
	top= -1;
	capacity= 10;
	int* arr= new int(capacity);
}

AStack::AStack(int size){
	top=-1;
	capacity= size;
	int* arr= new int(capacity);
}
AStack::~AStack(){
	delete [] arr;
	cout << "Stack removed from memory!";
}
void AStack::push(int element){
	if(top<capacity-1){
		top++;
		arr[top]= element;
	}
	else
		cout << "List is full!" << endl;
}
void AStack::pop(){
	if(top!=-1){
		delete arr[top];
		top--;
	}
	else
		cout << "List is empty!" << endl;
}
int AStack::top(){
	if(!isEmpty()){
		return arr[top];
	}
	else
		return -1;
}
bool AStack::isFull(){
	if(top==capacity-1)
		return true;
	else
		return false;
}
bool AStack::isEmpty(){
	if(top==-1)
		return true;
	else
		return false;
}
void AStack::makeStackEmpty(){
	top= -1;
	delete [] arr;
}
void evaluate(char* exp){
	AStack stack= new AStack(strlen(exp));
	for(int i= 0; i<strlen(exp); i++){
		if(isdigit(exp[i]))
			stack.push(int(exp[i]));
		else{
			int a= stack.top();
			stack.pop();
			int b= stack.top();
			stack.pop();
			switch (exp[i]) {
            			case '+':
                			stack.push(a + b);
                			break;
            			case '-':
                			stack.push(b - a);
                			break;
            			case '*':
                			stack.push(a * b);
                			break;
            			case '/':
                			stack.push(b / a);
                			break;
            		}
		}
	}
	cout << "Result: " << stack.top() << endl;
}



