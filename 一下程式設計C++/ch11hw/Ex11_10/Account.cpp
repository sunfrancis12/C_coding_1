// Member-function definitions for class Account.
#include <stdexcept>
#include <iostream>
#include "Account.h" // include definition of class Account
using namespace std;

Account:: Account(double n){
    if(n<0){
        cout<<"balance should be >=0";
        balance = 0;
    }else{
        setBalance(n);
    }
}

void Account:: setBalance(double n){
    if(n<0){
        cout<<"balance should be >=0";
        return;
    }
    balance = n;
}

double Account:: getBalance(){
    return balance;
}

void Account:: credit(double n){
    if(n<0){
        cout<<"credit should be >=0";
        return;
    }

    balance += n;
}

void Account:: debit(double n){
    if(n<0){
        cout<<"debit should be >=0";
        return;
    }
    else if(n>balance){
        cout<<"Debit amount exceeded account balance";
        return;
    }else{
        balance -= n;
        return;
    }
}
