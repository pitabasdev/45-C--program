#include <iostream>
using namespace std;
int main()
{
int dow;
cout<<"Enter weekday number(1-7)";
cin>>dow;
switch(dow)
{
case 1:cout<<"MONDAY";
break;
case 2:cout<<"TUESDAY";
break;
case 3:cout<<"WEDNESDAY";
break;
case 4:cout<<"THURSDAY";  break;
case 5:cout<<"FRIDAY";
break;
case 6:cout<<"SATURDAY";
break;
case 7:cout<<"SUNDAY";
break;  default:cout<<"wrong number of day";
break;
}
return 0;
}

