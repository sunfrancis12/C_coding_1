#include<iostream>
#include<array>
#include<string>
#include"Polynomial.h"

using namespace std;

int main(){
    Polynomial n1{2,4};
    Polynomial n2{3,5};
    Polynomial n3{4,6};
    Polynomial n4{4,3};
    cout<<n1<<endl;
    n1 += n2;
    cout<<n1<<endl;
    n4 -= n1;
    cout<<n4<<endl;
    n3 *= n1;
    cout<<n3<<endl;
}
