#include<iostream>
using namespace std;
int main(){
    int arr[][4]={{5,4,2,3},{8,3,4,6},{0,2,4,6}};
   int maxrow=-1;
   int maxsum=0;
    
    for(int i=0 ;i<3;i++){
        int sum=0;
        for(int j=0 ; j<4; j++){
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            maxrow=i;
        }
    }
    cout<<maxsum<<" "<<maxrow;
   
  
    
}