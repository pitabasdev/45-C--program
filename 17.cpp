
#include<iostream>

using namespace std;
int main()
{
int r,b,c,d, tot, avg;
cout<<"ENTER STUDENT ROLL NO ; "<<endl;
cin>>r;
cout<<"ENTER FIRST SUBJECT MARKS ;"<<endl;
cin>>b;
cout<<"ENTER SECOND SUBJECT MARKS;"<<endl;
cin>>c;
cout<<"ENTER THIRD SUBJECT MARKS ;"<<endl;
cin>>d;
tot=b+c+d;
avg=tot/3;

cout<<" STUDENT RNO :"<<r<<endl;
cout<<"FIRST SUBJECT MARKS :"<<b<<endl;
cout<<"SECOND SUBJECT MARKS :"<<c<<endl;
cout<<"THIRD SUBJECT MARKS :"<<d<<endl;
cout<<"AVERAGE MARKS :"<<avg<<endl;
return 0;
}

