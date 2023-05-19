#include "Point.h"
#include<iostream>
#include<string>
using namespace std;


ostream &operator>>(istream& input, Point& n){

    string s;
    int x,y;

    while(!cin.fail()){
        cin.width(1);
        cin>>s; //輸入"("
        cin>>x; //輸入x
        
        cin.width(2); 
        cin>>s; //輸入", "
        cin>>y; //輸入y

        cin>>s;
        
    }
}


ostream &operator<<(ostream& output,Point& n){

}
