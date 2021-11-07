#include <iostream>
using namespace std;
int main()
{
int choice;
cout << "Enter an integer number: 1 - 5 " ;
cin >> choice;
switch (choice)
{
case 1:
cout << "You entered 1.";
break;
case 2:
cout << "You entered 2.";
break;
case 3:
cout << "You entered 3.";
break;
case 4:
cout << "You entered 4.";
break;
case 5:
cout << "You entered 5.";
break;
default:
cout << "Invalid input.";
}
return 0; }
