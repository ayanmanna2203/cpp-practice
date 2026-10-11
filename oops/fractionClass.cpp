#include<iostream>
using namespace std ;

class Fraction{
    public:
    int num;
    int den;
    Fraction( int num , int den){
        this->den = den ;
        this->num = num ;
        simplify();
    }

     Fraction( ){
      simplify();
    }
    void print(){
        cout<< num<<"/"<<den<<endl;
    }
    void multiply(Fraction f){
        num = num * f.num;
        den = den *f.den;
        simplify();
    }
    void add(Fraction f){
        num = num * f.den + den * f.num;
        den = den * f.den;
        simplify();
    }
    void simplify(){
        int hcf = gcd(num , den);
        num /= hcf ;
        den /= hcf ;
    }
    int gcd(int a  , int b){
        if(a==0) return b;
        return gcd(b%a , a);
    }
};

// Fraction multiply(Fraction f1 , Fraction f2){
//     Fraction res;
//      res.num = f1.num * f2.num;
//      res.den = f1.den * f2.den;
//      return res ;
// }

int  main(){
    Fraction f1(2, 3);
    Fraction f2(3,2);
    Fraction f3(3,6);
    
    f1.print();
    f1.add(f2);
    f1.print();
    f3.print();


    // f1.print();
    // f2.print();
    // ans.print();

}