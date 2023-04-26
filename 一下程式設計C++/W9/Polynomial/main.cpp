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
    Polynomial n5{2,2};

    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n3 = "<<n3<<endl;
    cout<<"n4 = "<<n4<<endl;
    cout<<"n5 = "<<n5<<endl;

    n1 += n2;
    cout<<"n1 += n2 -> "<<n1<<endl;

    n4 -= n1;
    cout<<"n4 -= n1 -> "<<n4<<endl;

    n3 *= n1;
    cout<<"n3 *- n1 -> "<<n3<<endl;

    n5.addTerm(3,3);
    cout<<"n5 + 3x^3 =>"<<n5<<endl;

    n1 = n5;
    cout<<n1<<endl;
}
