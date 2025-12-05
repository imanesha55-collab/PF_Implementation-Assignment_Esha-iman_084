#include <iostream>
 #include <string> 
using namespace std; 
int main()
{
 string name; int age;
 double height;
 char gender; 
getline(cin, name); 
cin >> age >> height >> gender;
 cout << name << endl; 
cout << age << endl;
 cout << height << endl;
 cout << gender << endl;
 return 0;
 } 

