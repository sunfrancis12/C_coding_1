#include<iostream>
#include<string>
#include<sstream>
using namespace std;


class Man{

public:

Man(string x,int y){
    name = x;
    age = y;
}

string tostring(){
    stringstream ss;
    string str;

    cout<<name<<" "<<age<<endl;

    ss << "Name: "<<name<<" Age:"<<age;
    return ss.str();
}

string name;
int age;

};

int main(){

    Man one("Ben",50);

    cout<<one.tostring();

}



// Client.tosting()
