#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout<<" enter any number : ";
    cin>>n;

    string s= to_string(abs(n));
    cout<< s.length()<< endl;
}