#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main()
{

   vector<string> arr ={"0123", "0023", "456", "00182", "2901"};
     string max = arr[0];
     for(int i=0 ; i< arr.size(); i++){
        if(stoi(arr[i])>stoi (max)) {
            max =arr[i];
            
        }
        
     }

     cout<< max<<endl;
}