//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab2.cpp 
/// @brief Lab 2
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 11, 2014
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <string>
using namespace std;

int main() 
{
   string name = "";
   int numDays = 0;
    
   cout << "Good day, what is your name? ";
   cin >> name;
   cout << endl;
   cout << "How many nice days would you like, " << name << "? ";
   cin >> numDays;
   cout << endl;
   cout << "Hi, " << name  << ", have " << numDays*2 << " wonderful days!" 
   << endl;
   return 0;
}
