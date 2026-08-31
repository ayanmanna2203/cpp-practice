#include<iostream>
using namespace std;
void print();
void print(int start , int end){
    cout<<start<<" ";
    if(start==end) return;
    
    print(start+1, end);
}

int main(){
    int start, end;
    cout<<"Enter the starting number : ";
    cin>>start;
    cout<<"enter the ending number : ";
    cin>>end;
    print(start, end);
}