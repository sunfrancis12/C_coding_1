// Exercise 12.12 Solution: Package.h
// Definition of base class Package.
#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
public:
   // constructor initializes data members
   Package(const std::string&, const std::string&, const std::string&, 
      const std::string&, int, const std::string&, const std::string&, const std::string &, 
      const std::string&, int, double, double);

   void setSenderName(const std::string&); // set sender's name
   std::string getSenderName() const; // return sender's name
   void setSenderAddress(const std::string&); // set sender's address
   std::string getSenderAddress() const; // return sender's address
   void setSenderCity(const std::string&); // set sender's city
   std::string getSenderCity() const; // return sender's city
   void setSenderState(const std::string&); // set sender's state
   std::string getSenderState() const; // return sender's state
   void setSenderZIP(int); // set sender's ZIP code
   int getSenderZIP() const; // return sender's ZIP code
   void setRecipientName(const std::string&); // set recipient's name
   std::string getRecipientName() const; // return recipient's name
   void setRecipientAddress(const std::string&); // set recipient's address
   std::string getRecipientAddress() const; // return recipient's address
   void setRecipientCity(const std::string&); // set recipient's city
   std::string getRecipientCity() const; // return recipient's city
   void setRecipientState(const std::string&); // set recipient's state
   std::string getRecipientState() const; // return recipient's state
   void setRecipientZIP(int); // set recipient's ZIP code
   int getRecipientZIP() const; // return recipient's ZIP code
   void setWeight(double); // validate and store weight
   double getWeight() const; // return weight of package
   void setCostPerOunce(double); // validate and store cost per ounce
   double getCostPerOunce() const; // return cost per ounce

   virtual double calculateCost() const; // calculate shipping cost
private:
   // data members to store sender and recipient's address information
   std::string senderName;
   std::string senderAddress;
   std::string senderCity;
   std::string senderState;
   int senderZIP;
   std::string recipientName;
   std::string recipientAddress;
   std::string recipientCity;
   std::string recipientState;
   int recipientZIP;

   double weight; // weight of the package
   double costPerOunce; // cost per ounce to ship the package
}; 

#endif


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
