//  =============== BEGIN ASSESSMENT HEADER ================
/// @file mathematics.cpp
/// @brief assignment06/Mathematics
///
/// @author Test Student [akuru003@ucr.edu]
/// @date November 20, 2014
///
/// @par Plagiarism Section
/// I hereby certify that I have not received assistance on this assignment,
/// or used code, from ANY outside source other than the instruction team.
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>
using namespace std;

int acquireOperands(const string &op, double &x, double &y, double &z)
{
   int numbers = 0;      //acquire function
   if(op == "division")
   {
      numbers = 2;
   }
   else if(op == "pythagorean")
   {
      numbers = 2;
   }
   else if(op == "quadratic")
   {
      numbers = 3;
   }
   if((numbers == 2) && (op =="division"))
   {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl;
      cout << "Enter your second number: ";
      cin >> y;
      cout << endl;
   }
   else if((numbers == 2) && (op == "pythagorean"))
   {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl;
      cout << "Enter your second number: ";
      cin >> y;
      cout << endl;
   }
   else if(numbers == 3)
   {
      cout << "Enter your first number: ";
      cin >> x;
      cout << endl;
      cout << "Enter your second number: ";
      cin >> y;
      cout << endl;
      cout << "Enter your third number: ";
      cin >> z;
      cout << endl;
   }
   return numbers;
}
int division(double a, double b, double &result)
{
   int num = 0;
   if((b < 0.00000000000000001) && ( b > -0.00000000000000000001))
   {
      num = 1;
   }
   else
   {
      result = a/b;
   }
   return num;
}
int quadratic(double a, double b, double c, double &root1, double &root2)
{
   int num = 0;
   double result = 0;
   result = (pow(b,2) - (4 * a * c));
   if(result < 0.0)
   {
      num = 2;
   }
   else
   {
      if( a == 0)
      {
         num = 1;
      }
      else
      {
         root1 = (-b + sqrt(result))/(2 * a);
         root2 = (-b - sqrt(result))/(2 * a);
      }
   }
   return num;
}
int pythagorean(double a, double b, double &c)
{
   int num = 0;
   c = sqrt(pow(a,2) + pow(b,2));
   return num;
}
int main()    // main function
{
   string word = "";
   double a = 0.0;
   double b = 0.0;
   double c = 0.0;
   double d = 0.0;
   double e = 0.0;
   int counter = 0;
   int number = 0;
   do
   {
      cout << "Please choose an operation: ";
      cin >> word;
      cout << endl;
      if((word != "division") && (word != "pythagorean") && 
      (word != "quadratic"))
      {
         cout << "Error: Operation not supported." << endl;
      }
      if((word == "division") || (word == "pythagorean") ||
      (word == "quadratic"))
      {
         counter++;
      }
   }
   while(counter == 0);
   number = acquireOperands(word,a,b,c);  // takes in 2 or 3  and gets a,b,c
   if((number == 2) && (word == "division"))
   {
      cout << "Equation: " << a << " / " << b << endl;
      number = division(a,b,c);
      if((number == 1) && (b < 0.0000000000000001) && ( b > -0.000000000000001))
      {
         cout << "Error: Cannot divide by zero." << endl;
      }
      else
      {
         cout << "Result: " << c << endl;
      }
   }
   else if((number == 2) && (word == "pythagorean"))
   {
      cout << "Equation: " << "sqrt(" << a << "^2 + " << b << "^2)";
      cout << endl;
      number = pythagorean(a,b,c);
      cout << "Result: " << c << endl;
   }
   else if(number == 3)  
   {
      cout << "Equation: " << a << "x^2 + " << b << "x + " << c  << " = 0";
      cout << endl;
      number = quadratic(a,b,c,d,e);
      if(number == 2)
      {
         cout << "Error: Cannot take square root of a negative number." << endl;
      }
      else if(number == 1)
      {
         cout << "Error: Cannot divide by zero." << endl;
      }
      else
      {
         if(e == d)
         {
            cout << "Result: " << e << endl;
         }
         else
         {
            cout << "Result: " << e << ", " << d << endl;
         }
      }
   }
   return 0;
}