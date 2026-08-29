#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="abcd";
    int n=s.size();
    for(int i=0 ; i<=n ; i++){
        for(int j=0; j<= n-i; j++){
            cout<<s.substr(i,j)<< " ";
        }
        cout<<endl;
    }
}