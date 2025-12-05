#include <iostream>
 #include <iomanip> 
using namespace std; 
int main()
{
 double m1, m2, m3, m4, m5;
 cin >> m1 >> m2 >> m3 >> m4 >> m5;
 double total = m1 + m2 + m3 + m4 + m5;
 double average = total / 5.0;
 cout << total << " " << fixed << setprecision(2) << average << endl; return 0;
 } 

