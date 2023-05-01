// Member-function definitions for class CheckingAccount.
#include <iostream>
#include <stdexcept>
#include "CheckingAccount.h" // CheckingAccount class definition
#include "Account.h"
using namespace std;

CheckingAccount:: CheckingAccount(double balance,double fee)
: Account(balance){
    if(fee<0){
        cout<<"transactionFee should be >0";
        transactionFee = 0;
    }else{
        transactionFee = fee;
    }
};

void CheckingAccount:: credit(double n){
    if(n<0){
        cout<<"credit should be >=0";
        return;
    }

    if((Account::getBalance() + n)<transactionFee){
        cout<<"not enough money";
        return;
    }

    Account:: setBalance(Account::getBalance() + n);
    chargeFee();
}

void CheckingAccount:: debit(double n){
    if(n<0){
        cout<<"debit should be >=0";
        return;
    }

    if((Account::getBalance() - transactionFee)<n){
        cout<<"not enough money";
        return;
    }

    Account:: setBalance(Account::getBalance() - n);
    chargeFee();
}

void CheckingAccount:: chargeFee(){
    Account:: setBalance(Account::getBalance() - transactionFee);
}
