
#include<iostream>

using namespace std;
int main( )
{
int a,b,c,big=0;
cout<<"ENTER VALUE FOR A:";
cin>>a;
cout<<"ENTER VALUE FOR B:";
cin>>b;
cout<<"ENTER VALUE FOR C:";
cin>>c;
if (a>big)
big=a ;
if(b>big)
big=b;
if (c>big)
big=c;
cout<<"BIGGEST OF ABOVE GIVEN THREE NUMBER IS "<<big;
return 0;
}


