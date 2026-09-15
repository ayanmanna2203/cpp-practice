#include<iostream>
#include<vector>
using namespace std;

void printRec(vector<int>& arr , int idx ){
    if(idx == arr.size()) return;
    cout<<arr[idx]<< " ";
    printRec(arr , idx +1);
}



int main(){
    vector<int> arr = {1,4,-4 ,83,69,29};
    printRec(arr ,0);
}