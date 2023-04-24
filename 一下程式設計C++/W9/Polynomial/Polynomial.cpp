#include<iostream>
#include<array>
#include<string>
#include"Polynomial.h"

using namespace std;

Polynomial::Polynomial(int num=0, int x=0){
    // x是次方, num是係數
    integer[x] += num;

    if(x>max) max = x; //最高次方
};

Polynomial Polynomial::operator+(Polynomial &num){
    Polynomial temp;
    int big;

    if(max>num.max){
        big = max;
    }else{
       big = num.max;
    }

    temp.max = big;

    for (int i = 1; i <=big; i++){
       temp.integer[i] = integer[i] + num.integer[i];
    }

    return temp;
    
};

Polynomial Polynomial::operator-(Polynomial &num){
    Polynomial temp;
    int big;

    if(max>num.max){
        big = max;
    }else{
       big = num.max;
    }

    temp.max = big;

    for (int i = 1; i <=big; i++){
       temp.integer[i] = integer[i] - num.integer[i];
    }

    return temp;
    
};

Polynomial Polynomial::operator*(Polynomial &num){
    Polynomial temp;
    int x; //目前次方

    for (int i = 1; i <=max; i++){
        if(integer[i]==0) continue;

        for(int j=1;j<=num.max;j++){
            if(num.integer[j]==0) continue;

            x = i + j;

            if(x>temp.max) temp.max = x;

            temp.integer[x] = integer[i] * num.integer[j];
        }
    }

    return temp;
    
};

void Polynomial::operator+=(Polynomial &num){
    Polynomial temp;
    temp  = *this + num;
    *this = temp;
    return;
};

void Polynomial::operator-=(Polynomial &num){
    Polynomial temp;
    temp = *this - num;
    *this = temp;
    return;
};

void Polynomial::operator*=(Polynomial &num){
    Polynomial temp;
    temp = *this * num;
    *this = temp;
    return;
};

ostream& operator<<(ostream& output, Polynomial& num) {

    for(int i=num.max;i>=1;i--){
        if(num.integer[i]==0) continue;

        output<<num.integer[i]<<"X^"<<i<<" ";
    }

   return output;
}