#include <iostream>
using namespace std;
class Cricketer
{
private:
    int runs;
    string name;
    float average;

public:
    Cricketer(string name, int runs, float average)
    {
        (*this).name = name;
        this->runs = runs;
        this->average = average;
    }
    void print(){
        cout<<name<<endl;
        cout<<runs<<endl;
        cout<<average<<endl;
    }
    void setRuns(int runs){
        this->runs = runs;

    }
};

int main()
{

    // Cricketer c1("Virat Kohli" , 4567, 46.7);
    // Cricketer c2("Rohit sharma" , 11000, 59.7);
    // Cricketer c3("MS Dhoni" , 876, 87.7);

    Cricketer *c = new Cricketer("Virat Kohli", 4567, 46.7);
    
    c->print();
    c->setRuns(15000);
    c->print();



    // cout<<c.runs<<endl;
}