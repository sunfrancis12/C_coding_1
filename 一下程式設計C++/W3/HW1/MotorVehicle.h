#include<iostream>
#include<string>
using namespace std;

class MotorVehicle{

    public:
        explicit MotorVehicle(){

        }

        void set_name(string n){
            name = n;
        }

        string get_name(){
            return name;
        }

        void set_fuel(string n){
            fuel = n;
        }

        string get_fuel(){
            return fuel;
        }

        void set_color(string n){
            color = n;
        }

        string get_color(){
            return color;
        }

        void set_year(int n){
            if(n<=0){
                cout<<"error";
            }
            else{
                year = n;
            }
        }

        int get_year(){
            return year;
        }

        void set_capaity(int n){
            if(n<=0){
                cout<<"error";
            }
            capacity = n;
        }

        int get_capacity(){
            return capacity;
        }

        void display(){
            cout<<"vehicle: "<<get_name()<<endl;
            cout<<"FuelType: "<<get_fuel()<<endl;
            cout<<"Year of Manufacture: "<<get_year()<<endl;
            cout<<"Color: "<<get_color()<<endl;
            cout<<"Engine Capcvity: "<<get_capacity()<<endl;
        }
    
    private:

        string name="";
        string fuel="";
        string color="";
        int year=0;
        int capacity=0;

};