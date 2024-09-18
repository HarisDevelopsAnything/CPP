#include <iostream>
using namespace std;
class Stack{
    int top;
    int capacity;
    char* arr;
    public:
    Stack(int cap){
        top=-1;
        capacity=cap;
        arr= new char(capacity);
    }
    char pop(){
        if(top>-1)
        return(arr[top--]);
        else
        return '0';
    }
    void push(char c){
        if(top<capacity-1)
        arr[++top]=c;
        else
        cout << "Stack full!";
    }
    bool isEmpty(){
        if(top==capacity-1)
        return true;
    return false;
    }
};
int main(){
    char* exp= new char(100);
    cout << "Enter the expression: ";
    cin >> exp;
    Stack arr= Stack(100);
    int i=0,f=1;
    while(exp[i]!=NULL){
        if(exp[i]=='[' || exp[i]=='{' || exp[i]=='(')
        arr.push(exp[i]);
        else{
            char c= arr.pop();
            switch(c){
                case '(':
                if(exp[i]!=')')
                f= 0;
                break;
                case '{':
                if(exp[i]!='}')
                f= 0;
                break;
                case '[':
                if(exp[i]!=']')
                f= 0;
                break;
            }
        }
        i++;
    }
    if(f==1)
    cout << "Valid expression" << endl;
    else
    cout << "Invalid expression!" << endl;
}