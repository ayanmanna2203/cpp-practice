#include<iostream>
using namespace std;
int main(){
   cout<<"enter the elements of array"<<endl;
    int n,max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the elements of array are"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"the maximum number of array is"<<max;
    
}