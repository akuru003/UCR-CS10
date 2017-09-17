//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab5.cpp 
/// @brief Lab 5
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 30, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
using namespace std;

int main()
{ 
   string name = "";     // ex1 2
   int ex =0;
   int x =0;        // ex1 2
   int e =0;        // ex1 2
   int i =0;        // ex1 2
   char letter;     // ex1 2
   int index = 0;   // ex3
   int index1 = 0;  // ex3
   cout << "Which exercise? ";
   cin >> ex;
   cout << endl;
   if (1 == ex)
   {
      cout << "Enter a word: ";
      cin >> name;
      cout << endl; 
      for (i =0; i <= name.size() - 1; i++)
      {
         letter = name.at(i);
         if(letter == 'x')
         {
            x++;
         }
         if(letter == 'e')
         {
            e++;
         }
      }
      if(x>0)
      {
         cout << "Your word, " << name << ", contains the character" <<  " 'x'";
         cout << endl;
      }
      if(e>0)
      {
         cout << "Your word, " << name << ", contains the character" <<  " 'e'";
         cout << endl;
      }
   }
   else if (2 == ex)
   {
      cout << "Enter a word: ";
      cin >> name;
      cout << endl; 
      for (i =0; i <= name.size() - 1; i++)
      {
         letter = name.at(i);
         if(letter == 'x')
         {
            name.at(i) = '*';
         }
         if(letter == 'e')
         {
            name.at(i) = '3';
         }
         if(letter == 'i')
         {
            name.at(i) = '1';
         }
      }
      cout << "Your word transformed is " << name;
      cout << endl;
   }
   else
   {
      cout << "Enter a word: ";
      cin >> name;
      cout << endl;
      index = name.find('.');
      index1 = name.find("stop");
      if(index > -1)
      {
         cout << "The character " << "'.'" << " is located at index " << index;
         cout << endl;
      }
      if(index == -1)
      {
         cout << "The entry does not contain the character " << "'.'";
         cout << endl;
      }
      if(index1 > -1)
      {
         cout << "The word " << "\"stop\"" << " starts at index " 
         << index1;
         cout << endl;
      }
      if(index1 == -1)
      {
         cout <<  "The entry does not contain the word " << "\"stop\"";
         cout << endl;
      }
   }
   return 0;
}