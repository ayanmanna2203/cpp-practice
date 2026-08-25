#include <iostream>
#include <vector>
using namespace std;
int main(){


    int m, n;
    cout<<"enter the rows:  ";
    cin>>m;
    cout<<"enter columns: ";
    cin>>n;
    vector<vector<int>> arr(m,vector<int>(n,0));//definig 2D vector
    arr.push_back(vector<int>(4,-1));
    //output
    for(int i=0; i<arr.size();i++){
        for(int j=0 ; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}