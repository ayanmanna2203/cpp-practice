#include<iostream>
#include<stack>
using namespace std;

void printRev (stack<int>& st){
    stack<int>helper;
    while(st.size()){
        helper.push(st.top());
        st.pop();
    }
    while(helper.size()){
        cout<<helper.top()<<" ";
        st.push(helper.top());
        helper.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> st;
    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);
   
    printRev(st);
    printRev(st);
   
}