#include<iostream>
#include<array>
#include<string>

using namespace std;

class Polynomial{
    friend ostream& operator<<(ostream&, Polynomial&);
public:
    //static const int digits{10};
    static const int digits{40}; // maximum digits in a HugeInteger

    Polynomial(int,int);

    void addTerm(int,int);

    Polynomial operator+(Polynomial&);
    Polynomial operator-(Polynomial&);
    Polynomial operator*(Polynomial&);

    void operator+=(Polynomial&);
    void operator-=(Polynomial&);
    void operator*=(Polynomial&);

    ~Polynomial();

private:
    array<int, digits> integer{}; // default init to 0s
    int max = 0;//最高次方
};