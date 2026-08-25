#include<iostream>
using namespace std;
int main(){
    int i,j,k,l,m,n,p,q,a,b,c,d;
    cout<<"enter the number of terms";
    cin>>n;
    // for(p=1;p<=2*n;p++){
    //     cout<<"* ";
    // }
    cout<<endl;
    for(i=1;i<=n+1;i++){
        cout<<"*";
        for(j=1;j<i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(k=2*n;k>2*(i-1);k--){
            cout<<" ";
        }
        cout<<"*";
        for(m=1;m<i;m++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
   
    }
    for(a=1;a<=n;a++){
        cout<<"*";
        for(b=n;b>a;b--){
            cout<<" ";
        }
        cout<<"*";
        for(c=1;c<=2*a;c++){
            cout<<" ";
        }
        cout<<"*";
        for(d=n;d>a;d--){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    // for(q=1;q<=n+1;q++){
    //     cout<<"*  ";
    // }
}