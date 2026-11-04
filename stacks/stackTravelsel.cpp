#include<iostream>
#include<stack>
using namespace std;

void print (stack<int>& st){
    stack<int> helper;
     while( st.size()){
        cout<<st.top()<<" ";
        helper.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(helper.size()){
        st.push(helper.top());
        helper.pop();
    }

}
int main(){
    stack<int> st;
    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);
   
    print(st);
    print(st);
   
}