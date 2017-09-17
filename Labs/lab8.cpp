//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab8.cpp 
/// @brief Lab 8
///
/// @author Test Student [akuru003@ucr.edu]
/// @date November 20, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>
using namespace std;

int acquireOperands(const string &op, double &x, double &y, double &z)
{
   int numbers = 0;      //acquire function
   if(op == "division")
   {
      numbers = 2;                // go to mathematics.cpp for full program
   }
   else if(op == "pythagorean")
   {
      numbers = 2;
   }
   else if(op == "quadratic")
   {
      numbers = 3;
   }
   if((numbers == 2) && (op =="division"))
   {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl;
      cout << "Enter your second number: ";
      cin >> y;
      cout << endl;
   }
   else if((numbers == 2) && (op == "pythagorean"))
   {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl;
      cout << "Enter your second number: ";
      cin >> y;
      cout << endl;
   }
   else if(numbers == 3)
   {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl;
      cout << "Enter your second number: ";
      cin >> y;
      cout << endl;
      cout << "Enter your third number: ";
      cin >> z;
      cout << endl;
   }
   return numbers;
}
int main()
{
    return 0;
}