#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,m;
    cout<<"Enter the numbers in the pattern";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j>=i){
                cout<<i<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        for(j=n-1;j>=1;j--){
               if(j>=i){
                cout<<i<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
     for(i=n-1;i>=1;i--){
        for(j=1;j<=n;j++){
            if(j>=i){
                cout<<i<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        for(j=n-1;j>=1;j--){
               if(j>=i){
                cout<<i<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout<<endl;
     }    
    
}