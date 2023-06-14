#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){

    stringstream ss;
    string str;

    ss << 100 << " " << 6;

    ss >> str;

    cout<<str;

}



// Client.tosting()
