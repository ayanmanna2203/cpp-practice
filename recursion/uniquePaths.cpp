#include <iostream>
#include<string>
using namespace std;

void paths(int m , int n, string s){
    if(m==1 && n==1){
        cout<<s<<endl;
        return;
    }
     if(m==0 || n==0) return;
    paths(m,n-1,s+"R");
    paths(m-1, n, s+"D");
   
};
int main(){
    int m , n;
    cout<<"enter rows & cols : ";
    cin>>m>>n;
    paths(m,n,"");
}