#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,40,70,90};
    int b[]={30,50,60,80};
    int m=sizeof(a)/4;
    int n=sizeof(b)/4;
    int c[m+n];
    int i=m,j=n,k=m+n;
    while(i>0 && j>0){
        if(a[i]>b[j]){
            c[k--]=a[i--];
        }
        else{
            c[k--]=b[j--];
        }
    }
    while(i>0){
        c[k--]=a[i--];
    }
    while(j>0){
        c[k--]=b[j--];
    }
    for(int k=0 ;k<m+n;k++){
        cout<<c[k]<<" ";
    }
    
    

}