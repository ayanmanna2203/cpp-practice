#include<iostream>
using namespace std;
void param();
void kartik();
void ayan();
void kartik(){
    cout<<"kartik"<<endl;
    param();
}
void param(){
    cout<<"param"<<endl;
    ayan();
}
void ayan(){
    cout<<"ayan"<<endl;
   
}
int main(){
    kartik();
    param();
    ayan();
}