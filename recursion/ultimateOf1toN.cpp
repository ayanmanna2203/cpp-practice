#include<iostream>
using namespace std;
void print();
void print(int n){
    if(n==0) return; //base case
    cout<<n<<" ";
     print(n-1);   // call
    cout<<n<<" ";  // work 
   
}

int main(){
    int n;
    cout<<" enter the numbers to be printed : ";
    cin>>n;
    print(n);
}