//  =============== BEGIN ASSESSMENT HEADER ================
/// @file boardGame.cpp
/// @brief assignment07/Monte Carlo: Board Game
///
/// @author Test Student [akuru003@ucr.edu]
/// @date November 30, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <vector> 
using namespace std;

int rollNDice(int num, int sides)  // roll dice method
{
   int value = 0;
   int temp = 0;
   for(int i = 0; i < num; i++)
   {
      do                                   
      {                                    
         value = ((rand() % sides) + 1);
      }
      while((value < 0) && (value > sides));
      temp += value;
   }
   return temp;
}                                    
int mostLandings(const vector <int>& v, int a, int b) // returns index
{
   int index = 0;
   int c = a;
   int temp = b - a - 1;
   for(int i = 0; i <= temp; i++)
   {
      if(v.at(a) < v.at(c + 1))
      {
         a = c + 1;
      }
      c++;
   }
   index = a;
   return index;
}
int main()  // main method
{
   int sides = 0;
   int spots = 0;
   int sidecounter = 1;
   int sims = 0;
   int zero = 0;
   int temp = 0;
   int numval = 0;
   int spots2 = 0;
   srand(333);
   cout << "How many sides of the board are there? ";  // sides
   cin >> sides;
   cout << endl;
   cout << "How many spots are on each side? ";
   cin >> spots;
   cout << endl;
   spots2 = spots;
   cout << "How many simulations? ";  // num
   cin >> sims; 
   cout << endl;
   vector<int> v1(sides * spots + 10 + sims,0);
   cout << "The following spots on each side have the most landings: " << endl;
   for(int i = 0; i < sims; i++)
   {
      int temp2 = 0;
      if(temp2 < (spots * sides - 1))
      {
         do                               // roll dice and update numvals
         {
            numval = rollNDice(2,6);
            temp2 += numval;
            v1.at(temp2 - 1)++;  // numval
         }
         while(temp2 <= (spots * sides - 1));
      }
   }
   for(int i = 0; i < sides; i++)
   {
      temp = mostLandings(v1,zero,spots - 1);
      cout << "On side " << sidecounter << ", spot " << temp + 1;
      cout << " has the most landings: " << v1.at(temp) << endl;
      zero += spots2;
      spots += spots2;
      sidecounter++;
   }
   return 0;
}