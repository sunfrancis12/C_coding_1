// Test program for Account hierarchy.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Account.h" // Account class definition
#include "SavingsAccount.h" // SavingsAccount class definition
#include "CheckingAccount.h" // CheckingAccount class definition
using namespace std;

int main(){

   double num;
   bool saving = false;

   SavingsAccount account1( 25.0, .03 ); // create SavingsAccount object
   CheckingAccount account2( 80.0, 1.0 ); // create CheckingAccount object
   SavingsAccount account3( 200, .03 ); // create SavingsAccount object
   CheckingAccount account4( 80.0, 0.5 ); // create CheckingAccount object

   //創立一個vector陣列，裡面儲存變數種類為 Accont的class指標
   //詳情請見:https://ithelp.ithome.com.tw/articles/10304440?sc=iThelpR

   vector<Account*> vec = {&account1,&account2,&account3,&account4};

   for(int i = 0;i<vec.size();i++){

      cout << "account "<<i+1<<" balance: $" << vec[i] -> getBalance() << endl;
      cout<<"Enter an amount to withdraw from Account "<<i+1<<": ";
      cin>>num;
      vec[i] -> debit(num);
      cout<<"Enter an amount to depoist from Account "<<i+1<<": ";
      cin>>num;
      vec[i] -> credit(num); 

      //利用dynamic_cast將目前vector存取的Account*的資料類型(vec[i])，強制轉換成SavingsAccount*的類型
      //創建一個SavingAccont* 的object:"SavingPtr",將上述的東西賦予"SavingPtr"
      SavingsAccount* SavingPtr = dynamic_cast<SavingsAccount*>(vec[i]);

      //如果derivedPtr存在，代表vec[i]是一個SavingAccont的object
      if(SavingPtr != nullptr){
         double interest = SavingPtr->calculateInterest();

         cout<<"Adding "<<interest<<" interest to Account"<<i +1
         <<"(a SavingAccount)"<<endl;

         SavingPtr->credit(interest);
      }

      cout<<"Update Account "<<i+1<<" balance: "<<vec[i]->getBalance()<<endl;
      cout<<endl;

   }


} // end main

