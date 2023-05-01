// Definition of derived class TwoDayPackage.
#ifndef TWODAY_H
#define TWODAY_H

#include "Package.h" // Package class definition
using namespace std;

class TwoDayPackage : public Package
{
public:
   TwoDayPackage( const std::string &, const std::string &, const std::string &, 
      const std::string &, int, const std::string &, const std::string &, const std::string &, 
      const std::string &, int, double, double, double );

   void setFlatFee( double ); // set flat fee for two-day-delivery service
   double getFlatFee() const; // return flat fee

   double calculateCost() const; // calculate shipping cost for package
private:
   double flatFee; // flat fee for two-day-delivery service
}; // end class TwoDayPackage

#endif
