#include "cube.h"
#include "square.h"
#include<iostream>
using namespace std;

int main(){
    Cube a(3);
    Square b(4);

    cout<<"square area"<<b.getArea()<<endl;
    cout<<"Cube area"<<a.getArea()<<endl;
}