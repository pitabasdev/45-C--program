#include<iostream>
using namespace std;

int main()
{	
	cout << "\nMultiplication Table for 4 and 5  are\n";
	for (int i = 4; i < 6; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i * j <<"\n";
		}
    
	}		
 	return 0;
}
