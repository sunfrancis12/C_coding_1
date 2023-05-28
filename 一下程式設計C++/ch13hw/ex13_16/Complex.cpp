#include<iostream>
#include<string>
#include"Complex.h"
using namespace std;

Complex::Complex(){
}

ostream &operator<<(ostream& out,const Complex& c){

    if(c.imaginary<0){
        out << c.real<<c.imaginary<<"i";
    }else{
        out << c.real<<"+"<<c.imaginary<<"i";
    }

    return out;
}

istream &operator>>(istream& input, Complex& c){

    string s;

    input >> c.real;

    cin.width(3);
    input >> s;

    input >> c.imaginary;
    cin.width(1);
    input >> s;

    if(cin.fail()){
        c.real = 0;
        c.imaginary = 0;
    }
   

    return input;
}