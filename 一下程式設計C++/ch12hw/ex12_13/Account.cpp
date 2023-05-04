// Exercise 12.13 Solution: Account.cpp
// Member-function definitions for class Account.
#include <iostream>
#include <stdexcept>
#include "Account.h" // include definition of class Account
using namespace std;

// Account constructor initializes data member balance
Account::Account(double initialBalance) {
   // if initialBalance is greater than or equal to 0.0, set this value 
   // as the balance of the Account
   if (initialBalance < 0.0) {
      throw invalid_argument("Initial balance cannot be negative");
   }

   balance = initialBalance;
} 

// credit (add) an amount to the account balance
void Account::credit(double amount) {
   balance = balance + amount; // add amount to balance
} 

// debit (subtract) an amount from the account balance
// return bool indicating whether money was debited
bool Account::debit(double amount) {
   if (amount > balance) { // debit amount exceeds balance
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } 
   else { // debit amount does not exceed balance
      balance = balance - amount;
      return true;
   } 
} 

// set the account balance
void Account::setBalance(double newBalance) {
   balance = newBalance;
} 

// return the account balance
double Account::getBalance() {
   return balance;
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
