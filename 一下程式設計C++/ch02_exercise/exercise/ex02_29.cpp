// Exercise 2.29 Solution: ex02_29.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
   int length = 0; // length of cube face

   cout << "Face length\t\tSurface area\tVolume\n"; // output column heads
    cout<< "of cube(cm)\t\tof cube(cm^2)\tof cube(cm^3)\n";
    cout<< "-----------\t\t-------------\t-------------\n";
   // output the integer, its square and its cube
   cout << length << "\t\t\t\t" << 6 * length * length << "\t\t\t\t"
      << length * length * length << "\n";

   length = 1; // set length to 1
    cout << length << "\t\t\t\t" << 6 * length * length << "\t\t\t\t"
    << length * length * length << "\n";
    
   length = 2; // set length to 2
    cout << length << "\t\t\t\t" << 6 * length * length << "\t\t\t\t"
    << length * length * length << "\n";
    
   length = 3; // set length to 3
    cout << length << "\t\t\t\t" << 6 * length * length << "\t\t\t\t"
    << length * length * length << "\n";
    
    length = 4; // set length to 3
    cout << length << "\t\t\t\t" << 6 * length * length << "\t\t\t\t"
    << length * length * length << "\n";
} // end main
