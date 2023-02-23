// Exercise 2.28 Solution: ex02_28.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
    int number{0}; // integer read from user
    int digit1,digit2,digit3,digit4;
    cout << "Enter a four-digit integer: "; // prompt
    cin >> number; // read integer from user
    digit4 = number % 10;  //get last digit
    number = number /10;   //look at remaining digits
    digit3 = number % 10;  //get last digit
    number = number /10;   //look at remaining digits
    digit2 = number % 10;  //get last digit
    number = number /10;   //look at remaining digits
    digit1 = number % 10;  //get last digit
    cout << digit4 << "  " << digit3 << "  " << digit2 << "  " << digit1 << "  " << endl;
} // end main
