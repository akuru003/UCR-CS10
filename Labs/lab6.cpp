//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab6.cpp 
/// @brief Lab 6
///
/// @author Test Student [akuru003@ucr.edu]
/// @date November 6, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
using namespace std;
int main()
{
   int ex;   // variables needed for the exercises
   int num;
   int x = 0;
   int y = 0;
   int i = 0;
   int a = 0;
   int b = 0;
   int c = 0;
   int d = 0;
   int f = 0;
   int input = 0;
   int counter = 0;
   int counter2 = 0;
   cout << "Which exercise? ";
   cin >> ex;
   cout << endl;           // splits the program into 2 parts
   if ( ex == 1 )
   {                         // first loop
      cout << "Enter beginning and ending numbers, separated by space: ";
      cin >> x >> y;
      cout << endl;
      for(i = x; i <= y; i++)
      {
         if(i != y)
         {
            cout << i <<", ";
         }
         else
         {
            cout << i << endl;
         }
      }
      cout << endl;           // second loop
      cout << "Enter beginning and ending numbers, separated by space: ";
      cin >> x >> y;
      cout << endl;
      if(((y - x) % 2) == 0)
      {
         counter++;
      }
      if(((y - x) % 2) != 0)
      {
         counter+=2;
      }
      for(i = x; i <= y; i+=2)
      {
         if (counter == 1)
         {
            if(i != y)
            {
               cout << i <<", ";
            }
            else
            {
               cout << i;
            }
         }
         if(counter ==2)
         {
            if((i + 2) < y) 
            {
               if(i != y)
               {
                  cout << i <<", ";
               }
               else
               {
                  cout << i;
               }
            }
            else
            {
               cout << i;
            }
         }
      }
      cout << endl;
      cout << endl;              // third loop
      cout << "Enter the beginning and largest positive numbers, separated";
      cout << " by space: ";
      cin >> x >> y;
      cout << endl;
      for(i = x; i <= (y * 2); i*=-2)
      {
         if(counter2 == 0)
         {
            cout << i << ", ";
            counter2++;
         }
         else if (num == 1)
         {
            cout << i;
         }
         else if(counter2 == 1)
         {
            cout << i << ", ";
         }
         if(i == y)
         {
            num++;
         }
      }
      cout << endl;
   }
   else if ( ex == 2 )      // part two of program
   {
      cout << "Enter one or more grades, or -1 to stop:" << endl;
      do
      {
         cin >> input;
         if(input != -1)
         {
            if(input >=90)
            {
               a++;
            }
            else if(input >=80)
            {
               b++;
            }
            else if(input >=70)
            {
               c++;
            }
            else if(input >=60)
            {
               d++;
            }
            else
            {
               f++;
            }
         }
      }
      while(input != -1);  // outputs result
      cout << endl;
      cout << "The grades breakdown is:" << endl;
      cout << "As: " << a << endl;
      cout << "Bs: " << b << endl;
      cout << "Cs: " << c << endl;
      cout << "Ds: " << d << endl;
      cout << "Fs: " << f << endl;
      cout << endl;
   } 
   return 0;
}