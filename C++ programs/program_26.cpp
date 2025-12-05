#include <iostream>
 #include <iomanip> 
using namespace std; 
int main()
{
 double rupees;
 cin >> rupees;
 double rate = 60.0;
 double dollars = rupees / rate;
 cout << fixed << setprecision(2) << dollars << endl;
 return 0;
 }

