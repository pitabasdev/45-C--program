#include<iostream>

using namespace std;

int main()
{
	int x, y, z;
	
	cout << "Please enter the Three Different Number  = ";
	cin >> x >> y >> z;
	
	if(x - y > 0 && x - z > 0)
	{
    	cout << x << " is Greater Than both " << y << " and " << z;  
	}         
	else
	{
		if(y - z > 0)
    	{
	  		cout << y << " is Greater Than both " << x << " and " << z;  
		}     
   		else
    	{
      		cout << z << " is Greater Than both " << x << " and " << y;  
		}
  	}
 	return 0;
}
