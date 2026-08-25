#include<iostream>
using namespace std;
int main(){
    int arr[][4]={{8,4,3,5},{3,5,1,0},{4,6,2,5}};
    for(int i=0 ; i<3;i++){
        for(int j=0; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}