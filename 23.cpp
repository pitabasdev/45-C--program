
#include<iostream>

using namespace std;
int main( )
{
int a, b,c;
a=10;
b=20;
c=*(&a)+*(&b);
cout<<c;
return 0;
}


