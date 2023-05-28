#include "Point.h"
#include<iostream>
#include<string>
using namespace std;


istream &operator>>(istream& input, Point& n){

    string s;
    int x,y;

    while(!cin.fail()){
        cin.width(1);
        input>>s; //輸入"("
        input>>x; //輸入x
        
        cin.width(2); 
        input>>s; //輸入", "
        input>>y; //輸入y

        cin.widen(1);
        input>>s;
        break;
    }

    n.xCoordinate = x;
    n.yCoordinate = y;


    return input;
}


ostream &operator<<(ostream& output,const Point& n){
    output <<"("<<n.xCoordinate <<" ,"<<n.yCoordinate<<")";

    return output;
}
