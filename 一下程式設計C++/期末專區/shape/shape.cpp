#include<iostream>
#include "shape.h"
using namespace std;

Shape:: Shape(double n){
    setLength(n);
}

void Shape:: setLength(double n){
    len = n;
}

double Shape::getLength(){
    return len;
}