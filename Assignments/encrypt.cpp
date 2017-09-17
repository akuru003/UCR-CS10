//  =============== BEGIN ASSESSMENT HEADER ================
/// @file encrypt.cpp
/// @brief assignment03/Cipher Single
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 23, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
#include <string>
using namespace std;

int main() 
{                      
   string map;         // takes in default map
   string responce;  // takes in default or personal map
   string map2;      // takes in personal map
   string word;      // takes in user word
   char letter;     // check lower case
   int num;         // used to find word in string
   cout << "What is the translation map (type 'default' to use default): ";
   cin >> responce;
   cout << endl;
   if(responce == "default")
   {
      string map = "zyxwvutsrqponmlkjihgfedcba";
      cout << "What is the single word to translate: ";
      cin >> word;
      cout << endl;
      letter = word.at(0);                  // first letter of word entered
      if((letter < 97) || (letter > 122))
      {
         cout << "Error: encryption cannot be performed."<< endl;
      }
      if((letter >= 97) && (letter <= 122))
      {
         if(letter == 'a')
         {
            num=0;
         }
         if(letter == 'b')
         {
            num=1;
         }
         if(letter == 'c')
         {
            num=2;
         }
         if(letter == 'd')
         {
            num=3;
         }
         if(letter == 'e')
         {
            num=4;
         }
         if(letter == 'f')
         {
            num=5;
         }
         if(letter == 'g')
         {
            num=6;
         }
         if(letter == 'h')
         {
            num=7;
         }
         if(letter == 'i')
         {
            num=8;
         }
         if(letter == 'j')
         {
            num=9;
         }
         if(letter == 'k')
         {
            num=10;
         }
         if(letter == 'l')
         {
            num=11;
         }
         if(letter == 'm')
         {
            num=12;
         }
         if(letter == 'n')
         {
            num=13;
         }
         if(letter == 'o')
         {
            num=14;
         }
         if(letter == 'p')
         {
            num=15;
         }
         if(letter == 'q')
         {
            num=16;
         }
         if(letter == 'r')
         {
            num=17;
         }
         if(letter == 's')
         {
            num=18;
         }
         if(letter == 't')
         {
            num=19;
         }
         if(letter == 'u')
         {
            num=20;
         }
         if(letter == 'v')
         {
            num=21;
         }
         if(letter == 'w')
         {
            num=22;
         }
         if(letter == 'x')
         {
            num=23;
         }
         if(letter == 'y')
         {
            num=24;
         }
         if(letter == 'z')
         {
            num=25;
         }
         word.at(0) = map.at(num); 
         cout << "Encrypted word: " << word << endl;
         cout << "$";
         cout << endl;
      }
   }
   else 
   {
      map2 = responce;
      if(map2.length() != 26)
      {
         cout << "Error: invalid translation map size." << endl;
         cout << "$";
         cout << endl;
      }
      else 
      {
         cout << "What is the single word to translate: ";
         cin >> word;
         cout << endl;
         letter = word.at(0);  
         if((letter < 97) || (letter > 122))
         {
            cout << "Error: encryption cannot be performed." << endl;
         }
         if((letter >=97) && (letter <=122))
         {
            if(letter == 'a')
            {
               num=0;
            }
            if(letter == 'b')
            {
               num=1;
            }
            if(letter == 'c')
            {
               num=2;
            }
            if(letter == 'd')
            {
               num=3;
            }
            if(letter == 'e')
            {
               num=4;
            }
            if(letter == 'f')
            {
               num=5;
            }
            if(letter == 'g')
            {
               num=6;
            }
            if(letter == 'h')
            {
               num=7;
            }
            if(letter == 'i')
            {
               num=8;
            }
            if(letter == 'j')
            {
               num=9;
            }
            if(letter == 'k')
            {
               num=10;
            }
            if(letter == 'l')
            {
               num=11;
            }
            if(letter == 'm')
            {
               num=12;
            }
            if(letter == 'n')
            {
               num=13;
            }
            if(letter == 'o')
            {
               num=14;
            }
            if(letter == 'p')
            {
               num=15;
            }
            if(letter == 'q')
            {
               num=16;
            }
            if(letter == 'r')
            {
               num=17;
            }
            if(letter == 's')
            {
               num=18;
            }
            if(letter == 't')
            {
               num=19;
            }
            if(letter == 'u')
            {
               num=20;
            }
            if(letter == 'v')
            {
               num=21;
            }
            if(letter == 'w')
            {
               num=22;
            }
            if(letter == 'x')
            {
               num=23;
            }
            if(letter == 'y')
            {
               num=24;
            }
            if(letter == 'z')
            {
               num=25;
            }
            word.at(0) = map2.at(num); 
            cout << "Encrypted word: " << word << endl;
            cout << "$";
            cout << endl;
         }
      }
   }
   return 0;
}