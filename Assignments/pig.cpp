//  =============== BEGIN ASSESSMENT HEADER ================
/// @file pig.cpp
/// @brief assignment05/Monte Carlo: Pig
///
/// @author Test Student [akuru003@ucr.edu]
/// @date November 18, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int genRandInt(int small,int big)             // generates random number
{
   int value = 0;
   do                                   // 5 4 4 3 3 4 5 2 3 6 5
   {                                    
      value = (rand() % (big - small +1)) + small;
   }
   while((value < small) || (value > big));
   return value;
}
int singleTurn(int holdval) // calculates single turn score
{                                       // 5 4 4 3 3 4 5 2 3 6 5
   int score = 0;
   int value = 0;
   int counter = 0;
   while((score < holdval) && (counter != 1))
   {
      do
      {
         value = genRandInt(1,6);
         if(value == 1)
         {
            counter = 1;
            score = 0;
            value = -1;
         }
      }
      while(((value < 1) || (value > 6)) && (counter != 1));
      if(value != -1)
      {
         score += value;
      }
   }
   return score;
}

int main()  // main method of program
{
   int num = 0;  // hold val
   int turns = 0; // num of turns
   int i = 0;    // for loop
   int n = 0; // random num
   int tem,tem2,tem3,tem4,tem5,tem6,tem7 = 0;
   double t,t2,t3,t4,t5,t6,t7 = 0.0;
   srand(time(0));
   cout << fixed << setprecision(6);
   cout << "What value should we hold at? ";
   cin >> num;   // takes in number
   tem = 0;
   tem2 = num;
   tem3 = num + 1;
   tem4 = num + 2;
   tem5 = num + 3;  // takes in values
   tem6 = num + 4;
   tem7 = num + 5;
   cout << endl;
   cout << "Hold-at-N turn simulations? ";
   cin >> turns;   // takes in turns
   cout << endl;
   // 5 4 4 3 3 4 5 2 3 6 5                   
   // 17 loop - 19 20 0 22 17 18 0 20 0 17 
   // 19 loop - 19 20 0 22 23 0 20 0 21 0
   // 21 loop - 23 21 0 22 23 0 22 0 21 0
   cout << "Score" << '\t' << "Estimated Probability" << endl;
   for(i = 0; i < turns; i++)
   {
      n = singleTurn(num);
      if(n == tem)
      {
         t++;
      }
      else if(n == tem2)
      {
         t2++;
      }
      else if(n == tem3)
      {
         t3++;
      }
      else if(n == tem4)
      {
         t4++;
      }
      else if(n == tem5)
      {
         t5++;
      }
      else if(n == tem6)
      {
         t6++;
      }
      else if(n == tem7)
      {
         t7++;
      }
   }  
   cout << tem << '\t' << t/turns << endl;
   cout << tem2 << '\t' << t2/turns << endl;
   cout << tem3 << '\t' << t3/turns << endl;
   cout << tem4 << '\t' << t4/turns << endl;
   cout << tem5 << '\t' << t5/turns << endl;
   cout << tem6 << '\t' << t6/turns << endl;
   cout << tem7 << '\t' << t7/turns << endl;
   return 0;
}