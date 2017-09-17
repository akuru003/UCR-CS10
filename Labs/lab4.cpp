//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab4.cpp 
/// @brief Lab 4
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 23, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <string>
using namespace std;

int main()
{
   int ex;
   string word;
   char letter;
   char ex2;
   cout << "Which exercise? ";
   cin >> ex;
   cout << endl;
   if ( ex == 1 )
   {
      cout << "Enter a string: ";
      cin >> word; 
      letter = word.at(0);
      cout << endl;
      if(letter == 'a')
      {
         cout << letter << " is letter 1 of the alphabet" << endl;
      }
      if(letter == 'b')
      {
         cout << letter << " is letter 2 of the alphabet" << endl;
      }
      if(letter == 'c')
      {
         cout << letter << " is letter 3 of the alphabet" << endl;
      }
      if(letter == 'd')
      {
         cout << letter << " is letter 4 of the alphabet" << endl;
      }
      if(letter == 'e')
      {
         cout << letter << " is letter 5 of the alphabet" << endl;
      }
      if(letter == 'f')
      {
         cout << letter << " is letter 6 of the alphabet" << endl;
      }
      if(letter == 'g')
      {
         cout << letter << " is letter 7 of the alphabet" << endl;
      }
      if(letter == 'h')
      {
         cout << letter << " is letter 8 of the alphabet" << endl;
      }
      if(letter == 'i')
      {
         cout << letter << " is letter 9 of the alphabet" << endl;
      }
      if(letter == 'j')
      {
         cout << letter << " is letter 10 of the alphabet" << endl;
      }
      if(letter == 'k')
      {
         cout << letter << " is letter 11 of the alphabet" << endl;
      }
      if(letter == 'l')
      {
         cout << letter << " is letter 12 of the alphabet" << endl;
      }
      if(letter == 'm')
      {
         cout << letter << " is letter 13 of the alphabet" << endl;
      }
      if(letter == 'n')
      {
         cout << letter << " is letter 14 of the alphabet" << endl;
      }
      if(letter == 'o')
      {
         cout << letter << " is letter 15 of the alphabet" << endl;
      }
      if(letter == 'p')
      {
         cout << letter << " is letter 16 of the alphabet" << endl;
      }
      if(letter == 'q')
      {
         cout << letter << " is letter 17 of the alphabet" << endl;
      }
      if(letter == 'r')
      {
         cout << letter << " is letter 18 of the alphabet" << endl;
      }
      if(letter == 's')
      {
         cout << letter << " is letter 19 of the alphabet" << endl;
      }
      if(letter == 't')
      {
         cout << letter << " is letter 20 of the alphabet" << endl;
      }
      if(letter == 'u')
      {
         cout << letter << " is letter 21 of the alphabet" << endl;
      }
      if(letter == 'v')
      {
         cout << letter << " is letter 22 of the alphabet" << endl;
      }
      if(letter == 'w')
      {
         cout << letter << " is letter 23 of the alphabet" << endl;
      }
      if(letter == 'x')
      {
         cout << letter << " is letter 24 of the alphabet" << endl;
      }
      if(letter == 'y')
      {
         cout << letter << " is letter 25 of the alphabet" << endl;
      }
      if(letter == 'z')
      {
         cout << letter << " is letter 26 of the alphabet" << endl;
      }
   }
   else if ( ex == 2 )
   {
      cout << "Enter a character: ";
      cin >> ex2; 
      cout << endl;
      if((ex2 >=48) && (ex2 <=57))
      {
         cout << "You entered a numeric digit." << endl;
      }
      else if((ex2 >=65) && (ex2 <=90))
      {
         cout << "You entered an uppercase letter." << endl;
      }
      else if((ex2 >=97) && (ex2 <=122))
      {
         cout << "You entered a lowercase letter." << endl;
      }
      else
      {
         cout << "You entered an unknown character type." << endl;
      }
   }
   return 0;
}