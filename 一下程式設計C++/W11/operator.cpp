#include <iostream>
#include <string>
using namespace std;

class Rational {
    int numer;
    int denom;

public:
    Rational(int numer, int denom) : numer(numer), denom(denom) {}
    Rational operator+(const Rational&);
    Rational operator-(const Rational&);
    Rational operator*(const Rational&);
    Rational operator/(const Rational&);
    Rational& operator++();
    Rational& operator--();
    Rational operator++(int);
    Rational operator--(int);
    string to_string() const;
};

Rational Rational::operator+(const Rational &that) { 
    return Rational(
        this->numer * that.denom + that.numer * this->denom,
        this->denom * that.denom
    ); 
} 

Rational Rational::operator-(const Rational &that) { 
    cout<< this->to_string()<<" a"<<endl;
    return Rational(
        this->numer * that.denom - that.numer * this->denom,
        this->denom * that.denom
    ); 
} 

Rational Rational::operator*(const Rational &that) { 
    return Rational(
        this->numer * that.numer,
        this->denom * that.denom
    ); 
} 

Rational Rational::operator/(const Rational &that) { 
    return Rational(
        this->numer * that.denom,
        this->denom * that.numer
    ); 
} 

Rational& Rational::operator++() {
    this->numer = this->numer + this->denom;
    return (*this);
}

Rational& Rational::operator--() {
    this->numer = this->numer - this->denom;
    return (*this);
}

Rational Rational::operator++(int) {
    Rational r = (*this);
    this->numer = this->numer + this->denom;
    return r;
}

Rational Rational::operator--(int) {
    Rational r = (*this);
    this->numer = this->numer - this->denom;
    return r;
}

string Rational::to_string() const { 
    return std::to_string(this->numer) + "/" + std::to_string(this->denom);
} 

int main() {
    Rational a(1, 2);
    Rational b(2, 3);

    cout << (a + b).to_string() << endl;
    cout << (a - b).to_string() << endl;
    cout << (a * b).to_string() << endl;
    cout << (a / b).to_string() << endl;
    cout << (++a).to_string() << endl;
    cout << (--a).to_string() << endl;
    cout << (b++).to_string() << endl;
    cout << (b--).to_string() << endl;

    return 0;
}