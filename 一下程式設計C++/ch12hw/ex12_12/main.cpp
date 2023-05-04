// Driver program for Package hierarchy.
#include <iostream>
#include <iomanip>
#include<vector>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

int main()
{
   Package package1( "Lou Brown", "1 Main St", "Boston", "MA", 11111, 
      "Mary Smith", "7 Elm St", "New York", "NY", 22222, 8.5, .5 );
   TwoDayPackage package2( "Lisa Klein", "5 Broadway", "Somerville", "MA", 
      33333, "Bob George", "21 Pine Rd", "Cambridge", "MA", 44444, 
      10.5, .65, 2.0 );
   OvernightPackage package3( "Ed Lewis", "2 Oak St", "Boston", "MA", 
      55555, "Don Kelly", "9 Main St", "Denver", "CO", 66666, 
      12.25, .7, .25 );

   vector<Package*> vec = {&package1,&package2,&package3};

   double count = 0;

   for(int i=0;i<=2;i++){
      cout<<"Package "<<i+1<<":\n"<<endl;
      cout<<"Sender:\n"<< vec[i] -> getSenderAddress()<<endl;
      cout<< vec[i] -> getSenderCity()<<endl;
      cout<<vec[i] -> getSenderState()<<endl;
      cout<< vec[i] -> getSenderZIP()<<endl;

      cout<<"\nRecipient:"<<endl;
      cout<<vec[i] -> getRecipientAddress()<<endl;
      cout<< vec[i] -> getRecipientCity()<<endl;
      cout<<vec[i] -> getRecipientState()<<endl;
      cout<< vec[i] -> getRecipientZIP()<<endl;

      cout << "\nCost: $" << vec[i] -> calculateCost() << endl;
      count += vec[i] -> calculateCost();
   }

   cout <<"Total shipping cost: "<<count<<endl;
} // end main
