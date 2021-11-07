#include<iostream>
using namespace std;

int main()
{
	char startLwAlp;
	
	cout << "\nPlease Enter the Starting Lowercase Alphabet = ";
	cin >> startLwAlp;
	
	cout << "\n---List of Lowercase between " << startLwAlp << " and z are---\n";
	
	for(char lwalpCh = startLwAlp; lwalpCh <= 'z'; lwalpCh++)
	{
		cout << lwalpCh << " ";
	}
	
	return 0;
}
