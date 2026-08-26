#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,m=1;
    int rem=0;
    cout<<"enter the number as interge :";
    cin>>n;
    string s;
    while(n !=0){
        int lastDigit=n%10;
        char ch= lastDigit+48;
        s.push_back(ch);
        n/=10;
    }
    int i=0, j= s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
}