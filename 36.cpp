#include<iostream>
using namespace std;

int main()
{
	char alp = 'a'; 
	
	cout << "List of Lowercase Alphabets between a and z are---\n";
	
	while(alp <= 'z')
	{
		cout << alp << " ";
		alp++;
	}
	
	return 0;
}
