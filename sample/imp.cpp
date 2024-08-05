#include "header.h"
using namespace std;
A_List:: A_List(){
		size=0;
		capacity= 10;
		arr= new int(capacity);
	}
A_List:: A_List(int* a, int c, int s){
		capacity= c;
		size= s;
		arr= new int(size);
		for(int i=0;i<size;i++)
			arr[i]= a[i];
	}
int A_List:: isFull(){
	if(capacity == size)
		return 1;
	else
		return 0;
}
A_List:: ~A_List(){
		cout << "Cleaning up data." << endl;
		capacity= 0;
		size= 0;
		delete [] arr;
	}
int A_List:: isEmpty(){
		if(size==0)
			return 1;
		else
			return 0;
}
int A_List:: displayList(){
	for(int i=0;i<size;i++)
		cout << arr[i] << " ";
	cout << endl;
}
int A_List:: insertByPos(int pos, int element){
	if(pos<0 || pos >size+1)
		return 0;
	else{
		for(int i= size+1; i>=pos; i--)
			arr[i]= arr[i-1];
		arr[pos]= element;
		size++;
		return 1;
	}
}
int A_List:: insertAtFirst(int element){
		if(!isFull()){
			if(isEmpty())
				arr[size++]= element;
			else{
				for(int i= size;i>0;i--)
					arr[i]= arr[i-1];
				arr[0]= element;
				size++;
			}
			return 1;
		}
		else
			return 0;
	}
int A_List:: insertAtLast(int element){
		if(isFull())
			return 0;
		else{
			arr[size++]= element;
			return 1;
		}
	}
int A_List:: printReverse(){
		for(int i= size-1; i>=0;i--)
			cout << arr[i] << " ";
		cout << endl;
	}
int A_List:: find(int m){
		for(int i=0;i<size;i++){
			if(arr[i] == m)
				return i;
		}
		return -1;
	}
int A_List:: makeListEmpty(){
	size=0;
	return 1;
}
