#include<iostream>
using namespace std;


class Student{  // argument of function in a class is passed by referrence
public:
    string name;
    int rno;
    float cgpa;
    Student(string n , int r , float c){

         name = n ;
         rno = r;
         cgpa = c;
    }
     
    void print(){
    cout<<name<<endl<<rno<<endl<<cgpa<<endl;

    }
     
    
};

int main(){
    Student x("Ayan Manna" , 34 , 9.5);           // x is an object
    
    // Student y;           // x is an object
    // y.name ="Ram Sharma";
    // y.rno= 39;
    // y.cgpa= 8.5;
    //  Student z;           // x is an object
    // z.name ="Rakesh";
    // z.rno= 4;
    // z.cgpa= 7.5;


    // cout<<x.name<<" "<<x.rno<<" "<< x.cgpa;

    x.print();
   
}