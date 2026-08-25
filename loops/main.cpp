#include<iostream>
using namespace std;
int main(){
    int i,j,n,num=64;
    cout<<"enter the number of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        if (i%2==0)
        {
            for(j=1;j<=i;j++){
            cout<<j;
                   
        }
        
            /* code */
        }
        else{
            for(j=1;j<=i;j++){
            cout<<(char)( num+j) ;
                   
        }
        
        }
        cout<<endl;
        
    }
}