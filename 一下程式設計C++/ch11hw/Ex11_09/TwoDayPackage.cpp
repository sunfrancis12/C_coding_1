// Member-function definitions of class TwoDayPackage.
#include <stdexcept>
#include<iostream>
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "Package.h"

TwoDayPackage:: TwoDayPackage( const std::string &name, const std::string &address, 
    const std::string &city, const std::string &state, int zip, const std::string &R_name, 
    const std::string &R_address, const std::string &R_city, const std::string &R_state, 
    int R_zip, double weight, double COP, double flatfee)
    : Package(name,address,city,state,zip,R_name,R_address,R_city,R_state,R_zip,weight,COP){

        setFlatFee(flatfee);
}

    
void TwoDayPackage:: setFlatFee(double n){
    if(n<0){
        cout<<"Flatfee should be >0";
        flatFee = 0;
        return;
    }
    flatFee = n;
}

double TwoDayPackage:: getFlatFee() const{
    return flatFee;
}

double TwoDayPackage:: calculateCost() const{
    return flatFee + Package::calculateCost();
}