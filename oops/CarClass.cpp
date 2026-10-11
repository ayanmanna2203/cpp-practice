#include<iostream>
using namespace std;


class Car{
public:
    string name;
    int power;
    float milage;
    bool isE20Compatible;
    void print(){
    cout<<name<<endl<<power<<endl<< milage<<endl<<isE20Compatible;

    }


};


int main(){
    Car c1;
    c1.name = "Kia Sonet";
    c1.power = 118;
    c1.milage= 9.2;
    c1.isE20Compatible = true;

    Car c2 ={"Toyota Fortuner" , 200 , 7.6 , false};
    // print(c1);
    // print(c2);
    c1.print();


    
}