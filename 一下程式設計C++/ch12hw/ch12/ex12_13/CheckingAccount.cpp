// Exercise 12.15 Solution: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
#include <stdexcept>
#include "CheckingAccount.h" // CheckingAccount class definition
using namespace std;

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double initialBalance, double fee)
   : Account(initialBalance) { // initialize base class
   if (fee < 0.0) {
      throw invalid_argument("Transaction fee must be >= 0.0");
   }

   transactionFee = fee;
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit(double amount) {
   Account::credit(amount); // always succeeds
   chargeFee();
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit(double amount) {
   bool success{Account::debit(amount)}; // attempt to debit

   if (success) { // if money was debited, charge fee and return true
      chargeFee();
      return true;
   } 
   else { // otherwise, do not charge fee and return false
      return false;
   }
} 

// subtract transaction fee
void CheckingAccount::chargeFee() {
   Account::setBalance(getBalance() - transactionFee);
   cout << "$" << transactionFee << " transaction fee charged." << endl;
} 

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
