#include<iostream>
using namespace std;
int sum1();
int sum1(int n){
    if(n==0) return 0;
    int sum= n+ sum1(n-1);
    return sum;
}

int main(){
    int n;
    cout<<" enter the number : ";
    cin>>n;
    cout<<sum1(n);

}