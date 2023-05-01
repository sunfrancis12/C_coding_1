// Member-function definitions of class Package.
#include <stdexcept>
#include<iostream>
#include "Package.h" // Package class definition
using namespace std;

Package:: Package(const string &name, const string &address, const string &city, 
      const string &state, int zip, const string &R_name, const string &R_address,
       const string &R_city, const string &R_state, int R_zip, double weight, double CPO){

        setSenderName(name);
        setSenderAddress(address);
        setSenderCity(city);
        setSenderState(state);
        setSenderZIP(zip);

        setRecipientName(R_name);
        setRecipientAddress(R_address);
        setRecipientCity(R_city);
        setRecipientState(R_state);
        setRecipientZIP(R_zip);

        setWeight(weight);
        setCostPerOunce(CPO);

};


void Package :: setSenderName(const string &name){
    senderName = name;
};

string Package :: getSenderName() const{
    return senderName;
};

void Package :: setSenderAddress(const string &name){
    senderAddress = name;
};

string Package :: getSenderAddress() const{
    return senderAddress;
};

void Package :: setSenderCity(const string &name){
    senderCity = name;
};

string Package :: getSenderCity() const{
    return senderCity;
};

void Package :: setSenderState(const string &name){
    senderState = name;
};

string Package :: getSenderState() const{
    return senderState;
};

void Package:: setSenderZIP(int n){

    if(n<0){
        cout<<"zip should be >0";
        senderZIP = 0;
        return;
    }
    
    senderZIP = n;
};

int Package:: getSenderZIP() const{
    return senderZIP;
};



//R
void Package :: setRecipientName(const string &name){
    recipientName = name;
};

string Package :: getRecipientName() const{
    return recipientName;
};

void Package :: setRecipientAddress(const string &name){
    recipientAddress = name;
};

string Package :: getRecipientAddress() const{
    return recipientAddress;
};

void Package :: setRecipientCity(const string &name){
    recipientCity = name;
};

string Package :: getRecipientCity() const{
    return recipientCity;
};

void Package :: setRecipientState(const string &name){
    recipientState = name;
};

string Package :: getRecipientState() const{
    return recipientState;
};

void Package:: setRecipientZIP(int n){

    if(n<0){
        cout<<"zip should be >0";
        senderZIP = 0;
        return;
    }
    
    recipientZIP = n;
};

int Package:: getRecipientZIP() const{
    return recipientZIP;
};



//double
void Package:: setWeight(double n){
    if(n<0){
        cout<<"weight should be >0";
        weight = 0;
        return;
    }
    weight = n;
};

double Package:: getWeight() const{
    return weight;
};

void Package:: setCostPerOunce( double n){
    if(n<0){
        cout<<"COP should be >0";
        costPerOunce = 0;
        return;
    }
    costPerOunce = n;
};

double Package:: getCostPerOunce() const{
    return costPerOunce;
}

double Package:: calculateCost() const{
    return weight * costPerOunce;
}


