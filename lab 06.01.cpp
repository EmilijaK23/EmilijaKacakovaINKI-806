#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class date

{
	
private:
int day, month, year, hour, minute, second;

public:
date(){}

friend void operator>>(istream &in, date &d); //Overloading >> operator
friend void operator<<(ostream &out, date &d) //Overloading << operator

// https://www.tutorialspoint.com/cplusplus/cpp_friend_functions.htm
// https://www.geeksforgeeks.org/types-of-operator-overloading-in-c/

{

out<<"\n Date: ";
out<<d.day;
out<<"/";
out<<d.month;
out<<"/";
out<<d.year;
out<<"\n Time: ";
out<<d.hour;
out<<":";
out<<d.minute;
out<<":";
out<<d.second;
out<<" ";

}

~date(){}

}

;

void operator>>(istream &in, date &d)

// https://www.programiz.com/cpp-programming/operator-overloading

{

cout<<"\n Enter Day : ";
in>>d.day;

cout<<"\n Enter Month : ";
in>>d.month;

cout<<"\n Enter Year : ";
in>>d.year;

cout<<"\n Enter Hour : ";
in>>d.hour;

cout<<"\n Enter Minute : ";
in>>d.minute;

cout<<"\n Enter Second : ";
in>>d.second;

// cin>>d.year; // smeni in, shto se dobiva ?

cout<<"\n ------------------";
switch(d.month)

{

case 1: //January
case 3: //March
case 5: //May
case 7: //July
case 8: //August
case 10: //October
case 12: //December

if(d.day>31)

{

cout<<"\n Invalid Input ";
exit(0);

}

break;

case 4: //April
case 6: //June
case 9: //September
case 11: //November

if(d.day>30)

{

cout<<"\n Invalid Input ";
exit(0);

}

break;
case 2:

//Function for February Month. Checking whether the year is leap year or not.

if((d.year%100!=0&&d.year%4==0)||(d.year%400==0))

{

if(d.day>29)

{

cout<<"\n Invalid Input ";
exit(0);

}
}

else

{

if(d.day>28)

{

cout<<"\n Invalid Input ";
exit(0);

}
}

break;

}

switch (d.month)

{

    case 1: // January
    case 2: // February
    case 3: // March
    case 4: // April
    case 5: // May
    case 6: // June
    case 7: // July
    case 8: // August
    case 9: // September
    case 10: // October
    case 11: // November
    case 12: // December

    break;
    default: cout<<" Invalid Input ";

}

if (d.second>60)

{

    int ts;
    ts=d.second/60;
    d.minute=d.minute+ts;
    d.second=d.second-ts&60;

}

if (d.minute>60)

{

    int tm;
    tm=d.minute/60;
    d.hour=d.hour+tm;
    d.minute=d.minute-tm&60;

}

if (d.hour>24)

{

cout<<" Invalid Input "<<endl;

}
}

int main()

{

date d;
cout<<"\n Enter Date \n";
cout<<"\n ------------------";
cin>>d;
cout<<d;

return 0;

}
