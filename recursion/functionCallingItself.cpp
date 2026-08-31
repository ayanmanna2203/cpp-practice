#include<iostream>
using namespace std;
void ayan();
void ayan(int n){
    if(n==0) return;
    cout<<"ayan"<<endl;
    ayan(n-1 );
}

int main(){
    ayan(3);
}
