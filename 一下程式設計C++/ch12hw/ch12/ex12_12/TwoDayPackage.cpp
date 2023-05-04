// Exercise 12.12 Solution: TwoDayPackage.cpp
// Member-function definitions of class TwoDayPackage.
#include <stdexcept>
#include "TwoDayPackage.h" // TwoDayPackage class definition
using namespace std;

// constructor
TwoDayPackage::TwoDayPackage(const string& sName, 
   const string& sAddress, const string& sCity, const string& sState, 
   int sZIP, const string& rName, const string& rAddress, 
   const string& rCity, const string& rState, int rZIP, 
   double w, double cost, double fee) 
   : Package(sName, sAddress, sCity, sState, sZIP, 
      rName, rAddress, rCity, rState, rZIP, w, cost) {
   setFlatFee(fee);
} 

// set flat fee
void TwoDayPackage::setFlatFee(double fee) {
   if (fee < 0.0) {
      throw invalid_argument("Flat fee must be >= 0.0");
   }

   flatFee = fee;
} 

// return flat fee
double TwoDayPackage::getFlatFee() const {
   return flatFee;
} 

// calculate shipping cost for package
double TwoDayPackage::calculateCost() const {
   return Package::calculateCost() + getFlatFee();
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
