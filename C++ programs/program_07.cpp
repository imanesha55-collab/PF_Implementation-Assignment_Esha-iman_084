#include <iostream>
 using namespace std;
 int main()
 {
 int rollNo, PF, ICT, CG;
 cout << "Enter Roll No: ";
 cin >> rollNo;
 cout << "Enter marks in Programming Fundamentals: "; 
cin >> PF;
 cout << "Enter marks in Introduction to Computing: ";
 cin >> ICT;
 cout << "Enter marks in Computer Graphics: ";
 cin >> CG;
 int total = PF + ICT + CG;
 float average = total / 3.0;
 cout << "Total Marks = " << total << endl; 
cout << "Average Marks = " << average << endl;
 return 0;
 }

