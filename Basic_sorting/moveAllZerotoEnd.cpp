#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={2,4,0,4,0,5,0,6,1,0,8};
    int n=arr.size();
    print(arr);
    for(int i =0; i<n; i++){
        int swaps=0;
        for(int j=0; j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                swaps++;
                if( swaps==0) break;
            }
            
        }
    }
    print(arr);
}