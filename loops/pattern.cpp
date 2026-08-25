#include<iostream>
using namespace std;
int main(){

    int i,j,k,m,l,n;
    cout<<"enter the number of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        for (m=1;m<i;m++){
            cout<<" ";
        }
        {
            /* code */
        }
        
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(k=4*n;k>=4*i;k--){
            cout<<" ";
        }
        for(l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
