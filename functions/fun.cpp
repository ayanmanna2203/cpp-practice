#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;
}
int ncr(int p, int q){
    int ans;
    ans=fact(p)/(fact(p-q)*fact(q));
    return ans;
}
int main(){
    int n;
    cout<<"enter the number of rows ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<"  ";
            
        }
        cout<<endl;
    }


  
}