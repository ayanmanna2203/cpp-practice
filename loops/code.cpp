#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,i,j,k,m,num;
    cout<<"enter the number of half rows:"<<endl;
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            cout<<"* ";
        }
        for(k=2*num;k>2*(i+1);k--){
            cout<<" ";
        }
        for(m=0;m<=i;m++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(a=0;a<num;a++){
        for(b=num;b>a;b--){
            cout<<"* ";
        }
        for(c=0;c<2*a;c++){
            cout<<" ";
        }
        for(d=num;d>a;d--){
            cout<<"* ";
        }
        cout<<endl;
    }
       
    return 0;
}