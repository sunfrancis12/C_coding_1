#include"cube.h"
#include<iostream>
using namespace std;

Cube :: Cube(double n):Three(n){
    len = n;
}

double Cube::getArea(){
    return len*len*len;
}