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

void find(stack<int> st,int idx){
    stack<int> helper;
    while(idx ){
        helper.push(st.top());
        st.pop();
        
    }
    cout<<st.top();
    while(helper.size()){
        st.push(helper.top());
        helper.pop();
    }

}
void push(stack<int> st,int idx,int val){
    stack<int> helper;
    while(idx ){
        helper.push(st.top());
        st.pop();
        idx --;
    }
    cout<<st.top();
    while(helper.size()){
        st.push(helper.top());
        helper.pop();
    }

}

void remove(stack<int> st,int idx){
    stack<int> helper;
    while(idx ){
        helper.push(st.top());
        st.pop();
        idx --;
    }
    st.pop();
    while(helper.size()){
        st.push(helper.top());
        helper.pop();
    }
    // print(st);

}
int main(){
    stack<int> st;
    st.push(18);
    st.push(33);
    st.push(1);
    st.push(45);
    st.push(7);
   
    print(st);
    push(st, 2, 60);
    remove(st, 2);
    print(st);
    
    
    // print(st);


   
}