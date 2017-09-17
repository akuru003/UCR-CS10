//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab3.cpp 
/// @brief Lab 3
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 18, 2014
//  ================== END ASSESSMENT HEADER ===============


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int ex = 0;
   int x = 0;
   int y =0;
   double purchase = 0.0;
   double received = 0.0;
   double change = 0.0;
   int change1 = 0;
   int dollars = 0;
   int quarters = 0;
   int dimes = 0;
   int nickels = 0;
   int pennies = 0;
   int temp = 0.0;
   cout << "Which exercise? ";
   cin >> ex;
   cout << endl;
   if ( ex == 1 )
   {
      cout << "Enter the first integer: ";
      cin >> x;
      cout << endl;
      cout << "Enter the second integer: ";
      cin >> y; 
      cout << endl;
      cout << x << " + " << y << " = " << x+y << endl;
      cout << x << " * " << y << " = " << x*y << endl;
      cout << x << " / " << y << " = " << x/y << endl;
      cout << x << " % " << y << " = " << x%y << endl;
   }
   else if ( ex == 2 )
   {
      cout << "Enter purchase amount: ";
      cin >> purchase;
      cout << endl;
      cout << "Enter amount received: ";
      cin >> received;
      cout << endl;
      change = received-purchase;
      cout << "Total Change: $" << change;
      cout << endl;
      cout << endl;
      change1 = static_cast<int>(change * 100 + 0.5);
      dollars = (change1  / 100);  
      temp = (change1 % 100);   
      quarters = (temp / 25);
      change1 = (temp % 25);
      dimes = (change1 / 10);
      temp = (change1 % 10);
      nickels = (temp / 5);
      change1 = (temp % 5);
      pennies = (change1/1);
      cout << "dollars " << dollars << endl;
      cout << "quarters " << quarters << endl;
      cout << "dimes " << dimes << endl;
      cout << "nickels " << nickels << endl;
      cout << "pennies " << pennies << endl;
   }
   return 0;
}