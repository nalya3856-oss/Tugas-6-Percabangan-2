
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int var1 = 1;
 int var2 = 0;
 switch (var1) {
 case 0:
 cout << "Outer Switch Case 0\n";
 break;
 case 1:
 cout << "Outer Switch Case 1\n";
 
 switch (var2) {
 case 0:
 cout << "Inner Switch Case 0\n";
 break;
 }
 break;
 default:
 cout << "Default Case of Outer Loop";
 break;
 }
 return 0;
}
    