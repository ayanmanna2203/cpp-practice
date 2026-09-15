#include<iostream>
#include<vector>
using namespace std;

void printRecRev(vector<int>& arr , int idx){

    if(idx == -1) return;
    cout<<arr[idx]<<" ";
    printRecRev(arr, idx-1);
    
}

int main(){
    vector<int> arr = {1,4,-4 ,83,69,29};
    int n= arr.size();
    printRecRev(arr ,n-1);
}