// Fig. 10.18: Hugeinteger.cpp 
// HugeInteger member-function and friend-function definitions.
#include <cctype> // isdigit function prototype
#include "Hugeinteger.h" // HugeInteger class definition
using namespace std;

// default constructor; conversion constructor that converts
// a long integer into a HugeInteger object
HugeInteger::HugeInteger(long value) {
   // place digits of argument into array 
   for (int j{digits - 1}; value != 0 && j >= 0; j--) {
      integer[j] = value % 10;
      value /= 10;
      length++;
   }
}

// conversion constructor that converts a character string 
// representing a large integer into a HugeInteger object
HugeInteger::HugeInteger(const string& number) {
   // place digits of argument into array
   int n{number.size()};
   length = n;

   for (int j{digits - n}, k{0}; j < digits; ++j, ++k) {
      if (isdigit(number[k])) { // ensure that character is a digit
         integer[j] = number[k] - '0';
      }
   }
}

// addition operator; HugeInteger + HugeInteger
HugeInteger HugeInteger::operator+(const HugeInteger& op2) const {
   HugeInteger temp; // temporary result
   int carry = 0;

   for (int i{digits - 1}; i >= 0; i--) {
      temp.integer[i] = integer[i] + op2.integer[i] + carry;

      // determine whether to carry a 1
      if (temp.integer[i] > 9) {
         temp.integer[i] %= 10;  // reduce to 0-9
         carry = 1;
      }
      else { // no carry 
         carry = 0;
      }
   }

   return temp; // return copy of temporary object
}

// addition operator; HugeInteger + int
HugeInteger HugeInteger::operator+(int op2) const {
   // convert op2 to a HugeInteger, then invoke 
   // operator+ for two HugeInteger objects
   return *this + HugeInteger(op2);
}


HugeInteger HugeInteger::operator+(const string& op2) const {
   // convert op2 to a HugeInteger, then invoke 
   // operator+ for two HugeInteger objects
   return *this + HugeInteger(op2);
}

//乘法
HugeInteger HugeInteger::operator*(const HugeInteger& op2){

   HugeInteger temp; // temporary result
   HugeInteger a; //被乘數
   HugeInteger b; //乘數

   int num = 0;
   int carry = 0;

   //比大小
   if(*this > HugeInteger(op2)){
      a = *this;
      b = op2;
   }else{
      b = *this;
      a = op2;
   }

   //乘法直式
   for (int i = 0; i < b.length; i++) {
         for(int j = 0; j <=a.length; j++){
            num = a.integer[39-j] * b.integer[39-i];
            temp.integer[39-(j+i)] = temp.integer[39-(j+i)] + num%10 + carry;

            // determine whether to carry
            if (num > 9) {
               carry = num/10;
            }else { // no carry 
               carry = 0;
            }
         }
      }

      carry = 0;

      for (int i = 39; i>=0; i--){
         temp.integer[i] = temp.integer[i] + carry;
         
         //加法 檢查進位
         if(temp.integer[i]>9){
            carry = temp.integer[i]/10;
            temp.integer[i]%=10;
         }else{
            carry = 0;
         }
      }

   return temp; // return copy of temporary object
}

HugeInteger HugeInteger::operator*(int op2){
   return *this * HugeInteger(op2);
}

HugeInteger HugeInteger::operator*(const string& op2){
   return *this * HugeInteger(op2);
}

//除法
HugeInteger HugeInteger::operator/(const HugeInteger& op2){

   HugeInteger temp{1}; // temporary result

   int i = 0;

   while(true){
      temp = HugeInteger(i) * op2;
      if(temp>=*this) break;
      i++;
   }

   i = i-1;

   return HugeInteger(i); // return copy of temporary object
}

HugeInteger HugeInteger::operator/(int op2){
   return *this / HugeInteger(op2);
}

HugeInteger HugeInteger::operator/(const string& op2){
   return *this / HugeInteger(op2);
}


//大於
bool HugeInteger::operator>(const HugeInteger& op2){

   for (int i=0; i<40;i++) {
      if(integer[i]>op2.integer[i] ){
         return true;
      }else if(integer[i]==op2.integer[i]){
         continue;
      }else{
         return false;
      }
   }

   return false;
}

bool HugeInteger::operator>(int op2){
   return *this > HugeInteger(op2);
}

bool HugeInteger::operator>(const string& op2){
   return *this > HugeInteger(op2);
}

//小於
bool HugeInteger::operator<(const HugeInteger& op2){

   for (int i=0; i<40;i++) {
      if(integer[i]<op2.integer[i] ){
         return true;
      }else if(integer[i]==op2.integer[i]){
         continue;
      }else{
         return false;
      }
   }

   return false;
}

bool HugeInteger::operator<(int op2){
   return *this < HugeInteger(op2);
}

bool HugeInteger::operator<(const string& op2){
   return *this < HugeInteger(op2);
}

//等於
bool HugeInteger::operator==(const HugeInteger& op2){
   for (int i=0; i<40;i++) {
      if(integer[i]!=op2.integer[i]) return false;
   }

   return true;
}

bool HugeInteger::operator==(int op2){
   return *this == HugeInteger(op2);
}

bool HugeInteger::operator==(const string& op2){
   return *this == HugeInteger(op2);
}

//不等於
bool HugeInteger::operator!=(const HugeInteger& op2){
   for (int i=0; i<40;i++) {
      if(integer[i]!=op2.integer[i]) return true;
   }

   return false;
}

bool HugeInteger::operator!=(int op2){
   return *this != HugeInteger(op2);
}

bool HugeInteger::operator!=(const string& op2){
   return *this != HugeInteger(op2);
}


//小於等於
bool HugeInteger::operator<=(const HugeInteger& op2){

   if((*this == HugeInteger(op2)) || (*this < HugeInteger(op2))){
      return true;
   }else{
      return false;
   }

}

bool HugeInteger::operator<=(int op2){
   return *this <= HugeInteger(op2);
}

bool HugeInteger::operator<=(const string& op2){
   return *this <= HugeInteger(op2);
}

//大於等於
bool HugeInteger::operator>=(const HugeInteger& op2){

   if((*this == HugeInteger(op2)) || (*this > HugeInteger(op2))){
      return true;
   }else{
      return false;
   }

}

bool HugeInteger::operator>=(int op2){
   return *this >= HugeInteger(op2);
}

bool HugeInteger::operator>=(const string& op2){
   return *this >= HugeInteger(op2);
}

// overloaded output operator
ostream& operator<<(ostream& output, const HugeInteger& num) {
   int i;

   // skip leading zeros
   for (i = 0; (i < HugeInteger::digits) && (0 == num.integer[i]); ++i) {}

   if (i == HugeInteger::digits) {
      output << 0;
   }
   else {
      for (; i < HugeInteger::digits; ++i) {
         output << num.integer[i];
      }
   }

   return output;
}

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
