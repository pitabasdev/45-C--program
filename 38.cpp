#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter any Number to Check it is Divisible by 5 and 11 =  ";
	cin >> number;
	
	if(( number % 5 == 0 ) && ( number % 11 == 0 ))
	{
		cout << "Given number "<< number << " is Divisible by 5 and 11";
	}
	else
	{
		cout << "Given number "<< number << " is Not Divisible by 5 and 11";
	}
		
 	return 0;
}
