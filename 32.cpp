#include<iostream>
using namespace std;  
int main()
{
int amt,discount; 
cout<<"Enter amount : ";  
cin>>amt;  
if(amt>20000)  
discount=15;
else if(amt>15000)  discount=10;
else if(amt>10000)  discount=5;
else discount=0;
cout<<"You will get "<<discount<<"% discount.";
return 0;
}

