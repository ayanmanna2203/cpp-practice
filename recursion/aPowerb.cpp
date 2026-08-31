#include<iostream>
using namespace std;
// int power();
int power(int a , int b){
    if( b==0) return 1;
    int ans =a*power(a, b-1);
    return ans;

};

int main(){
    int a , b;
    cout<<"enter the number : ";
    cin>>a;
    cout<<"enter the power :";
    cin>>b;
    cout<<power(a,b);
}