#include<iostream> 
using namespace std ;


class Cricketer{
    public: 
    string name;
    int runs;
    float avg;
    Cricketer(string name , int runs , float avg){
        this->name = name ;
        this->runs = runs;
        this->avg = avg;
    }

    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<avg<<endl;
    }
};

int main(){

    Cricketer c1("Virat Kohli" , 4567, 46.7);
    Cricketer c2("Rohit sharma" , 11000, 59.7);
    Cricketer c3("MS Dhoni" , 876, 87.7);
    Cricketer* p =new Cricketer("ABD" , 10000, 87.4);  // object pointer
    Cricketer* ptr = &c1;

    p->print();

    // cout<<(*ptr).name<<endl;
    // cout<<ptr->name<<endl;
    // cout<<(*ptr).runs<<endl;
    // cout<<(*ptr).avg <<endl;

    // int x =10;
    // int* ptr =&x;
    // cout<<*ptr<<endl;
}