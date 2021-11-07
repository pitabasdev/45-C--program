#include<iostream>

using namespace std;

int main()
{
	int number, i = 1, sum = 0;
	
	cout << "\nPlease Enter the Number to find Sum of Natural Num  =  ";
	cin >> number;
	
	while( i <= number)
	{
		sum = sum + i;
		i++;
	}
			
	cout << "\nThe Sum of Natural Number from 1 to " << number << " = " << sum;

 	return 0;
}
