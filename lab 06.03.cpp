#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//defining the class Shape to demonstrate the concept of Hierarchial Inheritence in CPP

class Shape

{

//protected member variables are only accessible within the class and its descendent classes

protected:
float width, height;

//public members are accessible everywhere

public:
void setDimensions(float w, float h)

{

cout << "Setting the Dimensions using the parent Class: Shape\n";

if (w<80) cout << "The dimensions are: " << w << " and " << setfill('0') << setw(2) << h << "\n\n";
else cout << "The dimensions are: " << w << " and " << h << "\n\n";

width = w;
height = h;

}
}

;

//Class Rectangle inherites the Shape class

class Rectangle: public Shape

{

//Method Overriding

public: float area()

{

return (width * height)

;

}

public: float volume()

{

return (width+height)

;

}
}

;

//Class Triangle inherites the Shape class

class Triangle: public Shape

{

//Method Overriding

private: float i;
public: float area()

{

return (width * height / 2)

;

}

public: float length()

{

i*sqrt(pow(width, 2) + pow(height, 2))

;

 return (i)
 
;

}

public: float volume()

{

return (width+height+i+length())

;

}
}

;

//Defining the main method to access the members of the class

int main()

{

cout << " ===== Program to demonstrate the concept of Hierarchial Inheritence in CPP ===== \n\n";

//Declaring the Class objects to access the class members

Rectangle rectangle;
Triangle triangle;

rectangle.setDimensions(80, 6);
triangle.setDimensions(8, 06);

cout << "\nArea of the Rectangle computed using Rectangle Class is : " << rectangle.area() << "\n\n\n";
cout << "Area of the Triangle computed using Triangle Class is: " << triangle.area() << "\n\n\n";

cout << "\nVolume of the Rectangle calculated using the Rectangle class is : " << rectangle.volume() << "\n\n\n";
cout << "Volume of the triangle calculated using the Triangle class is : " <<  triangle.volume() << "\n\n\n";

cout << "\n\n\n";

return 0;

}
