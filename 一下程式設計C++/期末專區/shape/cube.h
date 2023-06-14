#include"three.h"
#include <iostream>
using namespace std;

class Cube : Three{
public:
    Cube(double n);

    double getArea();
private:
    double len;
};