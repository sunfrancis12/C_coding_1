// Member-function definitions of class BasePlusCommissionEmployee 
// using composition.
#include <iostream>
#include <stdexcept>
#include <string>

// BasePlusCommissionEmployee class definition
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string& first, const string& last, const string& ssn,
   double sales, double rate, double salary){


   commissionEmployee.setFirstName(first);
   commissionEmployee.setLastName(last);
   commissionEmployee.setSocialSecurityNumber(ssn);
   commissionEmployee.setGrossSales(sales);
   commissionEmployee.setCommissionRate(rate);

   setBaseSalary(salary); // validate and store base salary
};

void BasePlusCommissionEmployee:: setFirstName(const string& first) {
   commissionEmployee.setFirstName(first);
}

string BasePlusCommissionEmployee:: getFirstName() const{
   return commissionEmployee.getFirstName();
}

void BasePlusCommissionEmployee:: setLastName( const std::string &last ){
   commissionEmployee.setLastName(last);
}

string BasePlusCommissionEmployee:: getLastName() const{
   return commissionEmployee.getLastName();
}

void BasePlusCommissionEmployee:: setSocialSecurityNumber(const std::string &ssn){
   commissionEmployee.setSocialSecurityNumber(ssn);
}

string BasePlusCommissionEmployee::getSocialSecurityNumber() const{
   return commissionEmployee.getSocialSecurityNumber();
}

void BasePlusCommissionEmployee:: setGrossSales( double sales){
   commissionEmployee.setGrossSales(sales);
}

double BasePlusCommissionEmployee:: getGrossSales() const{
   return commissionEmployee.getGrossSales();
}

void BasePlusCommissionEmployee:: setCommissionRate( double rates){
   commissionEmployee.setCommissionRate(rates);
}

double BasePlusCommissionEmployee:: getCommissionRate() const{
   return commissionEmployee.getCommissionRate();
}

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
   if (salary < 0.0) {
      throw invalid_argument("Salary must be >= 0.0");
   }

   baseSalary = salary;
}

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const {
   return baseSalary;
}

// calculate earnings
double BasePlusCommissionEmployee::earnings() const {
   return getBaseSalary() + commissionEmployee.earnings();
}


