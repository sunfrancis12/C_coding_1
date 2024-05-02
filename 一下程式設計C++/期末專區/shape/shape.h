#include<iostream>
using namespace std;

#ifndef _shape
#define _shape

class Shape {

public:

    Shape(double);

    virtual void setLength(double);
    virtual double getLength();

private:
    double len;
};

#endif