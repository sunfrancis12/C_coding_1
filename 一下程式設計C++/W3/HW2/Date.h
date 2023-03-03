#include<iostream>
#include<string>
using namespace std;

class Date{

    public:
        Date(int a,int b,int c){
            set_year(a);
            set_month(b);
            set_day(c);
        }

        void set_month(int n){
            if(n<=0){
                cout<<"The month is error!"<<endl;
            }
            else{
                month = n;
            }
        }

        int get_month(){
            return month;
        }

        void set_day(int n){
            if(n<=0){
                cout<<"The day is error!"<<endl;
            }

            else if(month==2){ //2月閏年
                if(year%400==0 &&n<=29){
                    day = n;
                }
                else if(year%4==0 && year%100!=0 && n<=29){
                    day = n;
                }
                else{
                    if(n<=28){
                        day = n;
                    }
                    else{
                        cout<<"The day is error!"<<endl;
                    }
                }

            }

            else if(month==1 || month==3 ||month==5 ||month==7 ||month==8 ||month==10 ||month==12){
                if(n<=31){
                    day = n;
                }
                else{
                    cout<<"The day is error!"<<endl;
                }
            }

            else{
                if(n<=30){
                    day = n;
                }
                else{
                    cout<<"The day is error!"<<endl;
                }
            }
        }

        

        int get_day(){
            return day;
        }

        void set_year(int n){
            if(n<=0){
                cout<<"The year is error!"<<endl;
            }
            else{
                year = n;
            }
        }

        int get_year(){
            return year;
        }

        void display(){
            cout<<"year: "<<get_year()<<endl;
            cout<<"month: "<<get_month()<<endl;
            cout<<"day: "<<get_day()<<endl;
        }


    private:

        int year=0;
        int month=0;
        int day=0;    
};