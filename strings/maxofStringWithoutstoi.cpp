#include <iostream>
#include <string>
#include<vector>
using namespace std;


string biggerNumber(string s1 , string s2){

    int i=0;
    while(s1[i] == '0') i++;
    int s1_real_length =s1.length()-i;
    int j=0;
    while(s2[j]=='0') j++;
    int s2_real_length = s2.length()-j;
    if(s1_real_length > s2_real_length) return s1;
    if(s1_real_length < s2_real_length) return s2;
    while(i<s1.length() && s1[i]==s2[j]){
        i++;
        j++;
    }
    if(i==s1.length()) return s1;
    if(s1[i]>s2[j]) return s1;
    else return s2;

}


int main(){
    
   vector<string> arr ={"0123", "0023", "456", "00182", "2901"};
     string max = arr[0];
     for(int i=0 ; i< arr.size(); i++){
       
        max= biggerNumber(arr[i],max);
        
    }

     cout<< max<<endl;
}