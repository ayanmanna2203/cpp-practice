#include<iostream>
using namespace std;
int a=0;
int b=1;
int c=0;
int fibo(int n){
     if(n==0 or n==1) return 1;
    int ans = fibo(n-1) +fibo(n-2);
    
    return ans;
}

int main(){
    int n;
    cout<<"enter the number of terms : ";
    cin>>n;
    int m =n-1;
    cout<<fibo(m)<<endl;
}
