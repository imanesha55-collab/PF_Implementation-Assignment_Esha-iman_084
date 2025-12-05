#include <iostream> 
using namespace std;
 int main()
{
 int h, m, s;
 cin >> h >> m >> s;
 long total_seconds = h * 3600L + m * 60L + s;
 cout << total_seconds << endl;
 return 0;
 } 

