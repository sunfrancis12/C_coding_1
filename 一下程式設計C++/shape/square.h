#include"Two.h"
#include <iostream>
using namespace std;

class Square : Two{

public:
    Square(double n);

    double getArea();

private:
    double len;
};