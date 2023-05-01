// Member-function definitions for class SavingsAccount.
#include <stdexcept>
#include<iostream>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

SavingsAccount:: SavingsAccount(double balance,double rate)
:Account(balance){
    if(rate<0){
        cout<<"the rate should be >0";
        interestRate = 0;
    }else{
        interestRate = rate;
    }
};

double SavingsAccount:: calculateInterest(){
    return Account::getBalance() * interestRate;
}