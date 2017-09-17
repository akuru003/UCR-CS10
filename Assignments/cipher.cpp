//  =============== BEGIN ASSESSMENT HEADER ================
/// @file cipher.cpp
/// @brief assignment04/Cipher Many
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 31, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============

#include <iostream>
using namespace std;

int main() 
{            
   string type = "";
   string map = "";
   string map2 = "";
   string word = "";
   int i = 0;
   char letter;
   int counter = 0;
   int num = 0;
   int num1 = 0;
   cout << "What is the method (encryption or decryption)? ";
   cin >> type;
   cout << endl;
   if(type == "encryption")
   {
      cout << "What is the translation map (type 'default' to use default): ";
      cin >> map;
      cout << endl;
      if(map == "default")
      {
         string map = "zyxwvutsrqponmlkjihgfedcba";
         cout << "What is the single word to translate: ";
         cin >> word;
         cout << endl;
         for(i=0; i <= word.size() -1; i++)
         {
            letter = word.at(i);
            if((letter < 97) || (letter > 122))
            {
               counter++;
            }
         }
         if(counter > 0)
         {
            cout << "Error: encryption cannot be performed."<< endl;
         }
         if(counter == 0)
         {
            for(i=0; i <= word.size() - 1; i++)
            {
               letter = word.at(i);
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
               word.at(i) = map.at(num); 
            }
            cout << "Encrypted word: " << word << endl;
            cout << "$";
            cout << endl;
         } // up to counter
      }    // up to map is default
      else
      {
         map2 = map;
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
            for(i=0; i <= word.size() -1; i++)
            {
               letter = word.at(i);
               if((letter < 97) || (letter > 122))
               {
                  counter++;
               }
            }
            if(counter > 0)
            {
               cout << "Error: encryption cannot be performed."<< endl;
            }
            if(counter == 0)
            {
               for(i=0; i <= word.size() - 1; i++)
               {
                  letter = word.at(i);
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
                  word.at(i) = map.at(num); 
               } // up to for loop
               cout << "Encrypted word: " << word << endl;
               cout << "$";
               cout << endl;
            } // up to if loop
         } // else after invalid map
      } // main else
   } // up to big if 
   else if(type == "decryption") // default map
   {
      cout << "What is the translation map (type 'default' to use default): ";
      cin >> map;
      cout << endl;
      if(map == "default")
      {
         string map = "zyxwvutsrqponmlkjihgfedcba";
         cout << "What is the single word to translate: ";
         cin >> word;
         cout << endl;
         for(i =0; i <= word.size() - 1; i++)
         {
            if(map.find(word.at(i)) != -1)
            {
               counter++;
            }
         }
         if(counter == (word.size()))
         {
            for(i =0; i <= word.size() - 1; i++)
            {
               letter = word.at(i);
               num1 = map.find(letter);
               if(num1 == 0)
               {
                  word.at(i) = 'a';
               }
               if(num1 == 1)
               {
                  word.at(i) = 'b';
               }
               if(num1 == 2)
               {
                  word.at(i) = 'c';
               }
               if(num1 == 3)
               {
                  word.at(i) = 'd';
               }
               if(num1 == 4)
               {
                  word.at(i) = 'e';
               }
               if(num1 == 5)
               {
                  word.at(i) = 'f';
               }
               if(num1 == 6)
               {
                  word.at(i) = 'g';
               }
               if(num1 == 7)
               {
                  word.at(i) = 'h';
               }
               if(num1 == 8)
               {
                  word.at(i) = 'i';
               }
               if(num1 == 9)
               {
                  word.at(i) = 'j';
               }
               if(num1 == 10)
               {
                  word.at(i) = 'k';
               }
               if(num1 == 11)
               {
                  word.at(i) = 'l';
               }
               if(num1 == 12)
               {
                  word.at(i) = 'm';
               }
               if(num1 == 13)
               {
                  word.at(i) = 'n';
               }
               if(num1 == 14)
               {
                  word.at(i) = 'o';
               }
               if(num1 == 15)
               {
                  word.at(i) = 'p';
               }
               if(num1 == 16)
               {
                  word.at(i) = 'q';
               }
               if(num1 == 17)
               {
                  word.at(i) = 'r';
               }
               if(num1 == 18)
               {
                  word.at(i) = 's';
               }
               if(num1 == 19)
               {
                  word.at(i) = 't';
               }
               if(num1 == 20)
               {
                  word.at(i) = 'u';
               }
               if(num1 == 21)
               {
                  word.at(i) = 'v';
               }
               if(num1 == 22)
               {
                  word.at(i) = 'w';
               }
               if(num1 == 23)
               {
                  word.at(i) = 'x';
               }
               if(num1 == 24)
               {
                  word.at(i) = 'y';
               }
               if(num1 == 25)
               {
                  word.at(i) = 'z';
               }
            }
            cout << "Decrypted word: " << word << endl;
            cout << "$" << endl;
         }
         else
         {
            cout << "Error: decryption cannot be performed." << endl;
            cout << "$" << endl;
         }
        
      }
      else // decryption for user map
      {
         map2 = map;
         if(map2.length() != 26) // check for 26 
         {
            cout << "Error: invalid translation map size." << endl;
            cout << "$";
            cout << endl;
         }
         else // decrpyt with user map
         {
            cout << "What is the single word to translate: ";
            cin >> word;
            cout << endl;
            for(i =0; i <= word.size() - 1; i++)
            {
               if(map.find(word.at(i)) != -1)
               {
                  counter++;
               }
            }
            if(counter == (word.size()))
            {
               for(i =0; i <= word.size() - 1; i++)
               {
                  letter = word.at(i);
                  num1 = map.find(letter);
                  if(num1 == 0)
                  {
                     word.at(i) = 'a';
                  }
                  if(num1 == 1)
                  {
                     word.at(i) = 'b';
                  }
                  if(num1 == 2)
                  {
                     word.at(i) = 'c';
                  }
                  if(num1 == 3)
                  {
                     word.at(i) = 'd';
                  }
                  if(num1 == 4)
                  {
                     word.at(i) = 'e';
                  }
                  if(num1 == 5)
                  {
                     word.at(i) = 'f';
                  }
                  if(num1 == 6)
                  {
                     word.at(i) = 'g';
                  }
                  if(num1 == 7)
                  {
                     word.at(i) = 'h';
                  }
                  if(num1 == 8)
                  {
                     word.at(i) = 'i';
                  }
                  if(num1 == 9)
                  {
                     word.at(i) = 'j';
                  }
                  if(num1 == 10)
                  {
                     word.at(i) = 'k';
                  }
                  if(num1 == 11)
                  {
                     word.at(i) = 'l';
                  }
                  if(num1 == 12)
                  {
                     word.at(i) = 'm';
                  }
                  if(num1 == 13)
                  {
                     word.at(i) = 'n';
                  }
                  if(num1 == 14)
                  {
                     word.at(i) = 'o';
                  }
                  if(num1 == 15)
                  {
                     word.at(i) = 'p';
                  }
                  if(num1 == 16)
                  {
                     word.at(i) = 'q';
                  }
                  if(num1 == 17)
                  {
                     word.at(i) = 'r';
                  }
                  if(num1 == 18)
                  {
                     word.at(i) = 's';
                  }
                  if(num1 == 19)
                  {
                     word.at(i) = 't';
                  }
                  if(num1 == 20)
                  {
                     word.at(i) = 'u';
                  }
                  if(num1 == 21)
                  {
                     word.at(i) = 'v';
                  }
                  if(num1 == 22)
                  {
                     word.at(i) = 'w';
                  }
                  if(num1 == 23)
                  {
                     word.at(i) = 'x';
                  }
                  if(num1 == 24)
                  {
                     word.at(i) = 'y';
                  }
                  if(num1 == 25)
                  {
                     word.at(i) = 'z';
                  }
               }
               cout << "Decrypted word: " << word << endl;
               cout << "$" << endl;
            }
            else
            {
               cout << "Error: decryption cannot be performed." << endl;
               cout << "$" << endl; 
            }
         } // decryption jsut for user map
      } // decryption just for user map + validation
   } // big else if for decruption
   else
   {
      cout << "Error: invalid method choice.";
      cout << endl;
   }
   return 0;
}