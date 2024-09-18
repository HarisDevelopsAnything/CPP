#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the number of passes: ";
    cin >> m;
    int* arr= new int(n);
    for(int i=0;i<n;i++)
    arr[i]= i+1;
    bool win= false;
    int ind=0;
    int eli=0;
    cout << "Order of elimination: ";
    while(!win){
        ind= (ind+m)%n;
        if(arr[ind]!=-1){
            cout << arr[ind] << " ";
            arr[ind]=-1;
            eli++;
        }
        else
        continue;
        if(eli==n-1)
        win=true;
        ind++;
    }
    cout << endl;
    cout << "Winner is: ";
    for(int i=0;i<n;i++){
        if(arr[i]!=-1)
        cout << arr[i] << endl;
    }

}