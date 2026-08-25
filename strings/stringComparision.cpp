#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="abc";
    string s2= "xyz";
    if( s1== s2) cout<<"same string";
    else cout<<"not sane";

    if(s1> s2) cout<<"s1 is greater";
    else cout<< " s2 is greater";
}