//  =============== BEGIN ASSESSMENT HEADER ================
/// @file isbn.cpp
/// @brief assignment02/ISBN Checksum
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 18, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{                        
   int isbn;     // variable to take in isbn number
   int isbn1;    // variables to take in each individual number
   int temp1;
   int temp2;
   int temp3;
   int temp4;
   int temp5;
   int temp6;
   int temp7;
   int temp8;
   int temp9;
   int two;            // variables to take in numbers used to 
   int three;          // split isbn number into parts
   int four;
   int five;
   int six;
   int seven;
   int eight;
   int weightsum;      // the weightsum number
   cout << "Please enter the first 9 digits of the ISBN: "; 
   cin >> isbn;
   cout << endl;
   temp1 = floor(isbn/100000000);                  // calculations begin here
   temp2 = (floor(isbn/10000000)-(temp1 *10));  
   two = floor(isbn/10000000);
   temp3 = (floor(isbn/1000000) - (two *10));
   three = floor(isbn/1000000);
   temp4 = (floor(isbn/100000) -(three *10));
   four = floor(isbn/100000);
   temp5 = (floor(isbn/10000) -(four *10));
   five = floor(isbn/10000);
   temp6 = (floor(isbn/1000) -(five *10));
   six = floor(isbn/1000);
   temp7 = (floor(isbn/100) -(six *10));
   seven = floor(isbn/100);
   temp8 = (floor(isbn/10) -(seven *10));
   eight = floor(isbn/10);
   temp9 = (floor(isbn) -(eight *10));
   // weightsum gets printed
   weightsum = (temp1) + (temp2 *2) + (temp3 *3)  + (temp4 *4) + (temp5 *5)
   + (temp6 *6) + (temp7 *7) + (temp8 *8) + (temp9 *9);
   isbn1 = weightsum % 11;
   cout << "Checksum: " <<isbn1 << endl;  // Checksum gets printed out
   return 0;
}