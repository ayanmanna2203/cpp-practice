#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,i,j,k,m,num;
    cout<< "enter the number of terms:"<<endl;
    cin>>num;
    for(m=0;m<=num;m++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    for(i=1;i<num;i++){
        for(j=num;j>=i;j--){
            cout<<" ";
        }
        cout<<"*";

    
    for(k=0;k< 2*i-1;k++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    }
    for(a=1;a<=num;a++){
        for(b=0;b<a;b++){
            cout<<" ";
        }
        cout<<"*";
        for(c=2*num+1;c>2*a;c--){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(d=0;d<=num;d++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    return 0;
}