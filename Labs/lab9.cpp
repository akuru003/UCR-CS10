//  =============== BEGIN ASSESSMENT HEADER ================
/// @file lab9.cpp 
/// @brief Lab 9
///
/// @author Test Student [akuru003@ucr.edu]
/// @date November 30, 2014
//  ================== END ASSESSMENT HEADER ===============
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void fillVector(vector <double>&);
double average(const vector <double>&);
double standardDeviation(const vector <double>&);
int main()
{   
   double num = 0;  // mean
   double answer = 0; // answer
   vector <double> v1(0); 
   fillVector(v1);
   num = average(v1);
   answer = standardDeviation(v1);
   cout << answer << endl;
   return 0;
}
void fillVector(vector <double>& v)
{
   double d;
   while (cin >> d)
   {
      v.push_back(d);
   }
} 
double average(const vector <double>& v)
{
   double sum = 0;
   for (int i = 0; i < v.size(); i++)
   {
      sum += v.at(i);
   }
   return sum / v.size();
}
double standardDeviation(const vector <double>& v)
{
   double standardDeviation = 0;
   double num = average(v);
   int temp = 0;
   int temp1 = 0;
   for (int i = 0; i < v.size(); i++)
   {
      temp = pow((v.at(i) - num), 2);
      temp1 += temp;
   }
   standardDeviation = static_cast<double>(temp1)/v.size();
   standardDeviation = sqrt(standardDeviation);
   return standardDeviation;
}