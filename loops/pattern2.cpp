#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,m,a=1,b=0;
    cout<<"enter the number of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=1;j<=i;j++){
                if(j%2==0){
                    cout<<a;
                }
                else{
                    cout<<b;
                }
            }
        }
        else{
            for(j=1;j<=i;j++){
                if(j%2==0){
                    cout<<b;
                }
                else{
                    cout<<a;
                }
            }
        }
        cout<<endl;
    }
}