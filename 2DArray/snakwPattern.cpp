#include<iostream>
using namespace std;
int main(){
    int arr[][4]={{5,2,6,3},{7,3,5,9},{5,7,2,1},{0,6,3,5}};
    for(int i=0; i<4; i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=3;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}