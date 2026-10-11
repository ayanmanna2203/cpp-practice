#include<iostream>
using namespace std;
class Pokemon{
public:
    string name;
    string type;
    int hp;

    Pokemon(string n , string t , int h){
        this->name = n ;
        this->type = t; 
        this->hp = h;
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;

    }

};

int main(){
    Pokemon p1("Pikachu" ,"electric", 70);
    Pokemon p2("charizard" , "fire"  , 120);
    Pokemon p3("Mewtwo" , "psychic" , 200);

    p1.print();
    p2.print();
    p3.print();
}