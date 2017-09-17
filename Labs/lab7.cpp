//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab7.cpp 
/// @brief Lab 7
///
/// @author Test Student [akuru003@ucr.edu]
/// @date November 13, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int genRandInt(int numsmall, int numbig)  // generates random num for ex 1
{
   int value =0;
   do
   {
      value = rand();
      value = (value % (numbig - numsmall +1)) + small;
   }
   while((value < numsmall) || (value > numbig));
   return value;
}
int flipCoin()  // generates random num for ex 2 1-2
{
   int value = 0;
   do
   {
      value = rand();
      value = (value % 2) + 1;
   }
   while((value < 1) || (value > 2));
   return value;
}
int main()   // main method that starts program
{
   srand(time(0)); // rand();
   int ex = 0;
   string word;
   int num1, num2, value = 0;
   cout << "which exercise? ";
   cin >> ex;
   cout << endl;
   if( ex == 1) // for exercise 1
   {
      cout << "Enter the smallest possible number: ";
      cin >> num1;
      cout << endl;
      cout << "Enter the biggest possible number: ";
      cin >> num2;
      cout << endl;
      value = genRandInt(num1,num2);
      cout << "Random number: " << value;
      cout << endl;
      value = genRandInt(num1,num2);
      cout << "Random number: " << value;
      cout << endl;
      value = genRandInt(num1,num2);
      cout << "Random number: " << value;
      cout << endl;
   }
   else if ( ex ==2) // for exercise 2
   {
      do
      {
         value = flipCoin();
         if(value == 1)
         {
            cout << "Flip: heads" << endl;
         }
         if(value == 2)
         {
            cout << "Flip: tails" << endl;
         }
         cout << "Toss the coin again (yes/no)? ";
         cin >> word;
         cout << endl;
      }
      while(word != "no");
   }
   return 0;
}