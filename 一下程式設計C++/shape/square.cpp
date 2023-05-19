#include"square.h"
#include <iostream>
using namespace std;

Square:: Square(double n):Two(n){
    len = n;
}

double Square:: getArea(){
    return len*len;
}