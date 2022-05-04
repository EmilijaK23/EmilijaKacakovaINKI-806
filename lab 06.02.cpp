#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class operations

{

//declaring member variables

public:
int num1, num2, e;

//defining member function or methods

public:
void input()

{

cout <<"\nEnter three numbers to perform operations on: ";
cin >> num1 >> num2 >> e;
cout << "\n";

}

public:

void addition()

{

int a;
a = num1 + num2;
cout << " Addition : " << a << endl;

}

void subtraction()

{

int s;
s = num1 - num2;
cout << " Subtraction : " << s << endl;

}

void multiplication()

{

int m;
m=num1*num2;
cout << " Multiplication : " << m << endl;

}

void division()

{

float d;
d=(float) num1 / num2;
cout << " Division : " << d << endl;

}

void squaringx()

{

int x;
x = pow (num1,num2);
cout << " Squaring : " << x << endl;

}

void squaringy()

{

int y;
y = pow(e,num1+num2);
cout << " Squaring " << y << endl;

}
}

;

//Defining the main method to access the members of the class

int main()

{

cout << " ===== Program to perform basic operations using Class, in CPP ===== \n\n ";

//Declaring class object to access class members from outside the class

operations op;

cout << "\nCalling the input() function from the main() method\n";
op.input();

int choice;

do

{

cout << " 1. Addition of two numbers; " << endl;
cout << " 2. Subtraction of two numbers; " << endl;
cout << " 3. Multiplication of two numbers; " << endl;
cout << " 4. Division of two numbers; " << endl;
cout << " 5. Squaring; " << endl;
cout << " 6. Squaring with expressions; " << endl;
cout << " 0. Exit. " << endl;
cout << " Intup Choise: " << endl;
cin >> choice;

switch (choice)

{

case 1: op.addition();
break;
case 2: op.subtraction();
break;
case 3: op.multiplication();
break;
case 4: op.division();
break;
case 5: op.squaringx();
break;
case 6: op.squaringy();
break;
case 0:
break;

default: cout << " Invalid Input ";

}
}

while (choice!=0)

;

cout << "\nCalling the addition() function from the main() method\n";
op.addition();

cout << "\nCalling the subtraction() function from the main() method\n";
op.subtraction();

cout << "\nCalling the multiplication() function from the main() method\n";
op.multiplication();

cout << "\nCalling the division() function from the main() method\n";
op.division();

cout << "\nCalling the squaringx() function from the main() method\n";
op.squaringx();

cout << "\nCalling the squaringy() function from the main() method\n";
op.squaringy();

cout <<"\nExiting the main() method\n\n\n";

return 0;

}
