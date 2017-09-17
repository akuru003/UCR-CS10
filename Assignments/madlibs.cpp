//  =============== BEGIN ASSESSMENT HEADER ================
/// @file madlibs.cpp
/// @brief assignment01/mad libs
///
/// @author Test Student [akuru003@ucr.edu]
/// @date October 11, 2014
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
   // strings are declared
   string a,b,c,d,e,f,g,h,i,j = ""; 
   string measuringStick(80, '-');
   // user is asked to enter the 10 needed inputs
   cout << " Please enter a profession: "; 
   cin >> a;
   cout << endl;
   cout << " Please enter a hobby: ";
   cin >> b;
   cout << endl;
   cout << " Please enter a family member: ";
   cin >> c;
   cout << endl;
   cout << " Please enter a location: ";
   cin >> d;
   cout << endl;
   cout << " Please enter a person's name: ";
   cin >> e;
   cout << endl;
   cout << " Please enter a number: ";
   cin >> f;
   cout << endl;
   cout << " Please enter your favorite food: ";
   cin >> g;
   cout << endl;
   cout << " Please enter your favorite restaurant: ";
   cin >> h;
   cout << endl;
   cout << " Please enter your favorite drink: ";
   cin >> i;
   cout << endl;
   cout << " Please enter a large number: ";
   cin >> j;
   cout << endl;
   // the story begins here
   cout << measuringStick << endl;
   cout << "There was once a " << a << " who lived by the beach ";
   cout << " because he liked the sand." << endl;
   cout << "His favorite hobby was " << b  << " because it was so fun ";
   cout << "for him to enjoy it!" << endl;
   cout << "He lived with his " << c << " at his house because he liked";
   cout << " taking care of her." << endl;
   cout << endl;
   // end of paragraph 1
   cout << "He decided to go to the " << d << " for fun because he always";
   cout << " had a good time." << endl;
   cout << "He went with his best friend " << e  << " which he met "; 
   cout << "through a school club." << endl;
   cout << "They both liked the number " << f << " because it was so cool ";
   cout << "to them to look at." << endl;
   cout << "They both liked eating " << g  << " because it was really tasty ";
   cout << " and delicious." << endl;
   cout << endl;
   // end of paragraph 2
   cout << "They went to a restaurant called " << h << " which was their ";
   cout << " favorite place." << endl;
   cout << "They both ordered " << i << " to drink because they liked the ";
   cout << "taste it had." << endl;
   cout << "They left the waiter a $" << j << " tip because she did a";
   cout << " great job for them!" << endl;
   //end of paragraph 3
   cout << measuringStick << endl;
   return 0;
}