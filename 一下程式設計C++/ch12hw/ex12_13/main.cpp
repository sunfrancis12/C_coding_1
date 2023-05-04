// Test program for Account hierarchy.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Account.h" // Account class definition
#include "SavingsAccount.h" // SavingsAccount class definition
#include "CheckingAccount.h" // CheckingAccount class definition
using namespace std;

int main(){

   double num;
   bool saving = false;

   SavingsAccount account1( 25.0, .03 ); // create SavingsAccount object
   CheckingAccount account2( 80.0, 1.0 ); // create CheckingAccount object
   SavingsAccount account3( 200, .03 ); // create SavingsAccount object
   CheckingAccount account4( 80.0, 0.5 ); // create CheckingAccount object

   vector<Account*> vec = {&account1,&account2,&account3,&account4};

   for(int i = 0;i<vec.size();i++){

      cout << "account "<<i+1<<" balance: $" << vec[i] -> getBalance() << endl;
      cout<<"Enter an amount to withdraw from Account "<<i+1<<": ";
      cin>>num;
      vec[i] -> debit(num);
      cout<<"Enter an amount to depoist from Account "<<i+1<<": ";
      cin>>num;
      vec[i] -> credit(num);
      
   }

} // end main

