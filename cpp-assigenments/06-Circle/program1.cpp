/*
create a class circle with a priavte member radius. Implement three constructors:
default constructor (radius=0)
parameterized constructor accepting radius
copy constructor

author: munja pawar
*/

#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

class Circle
{
    private:
    double radius = 0.0;

    public:

    Circle(){radius = 0.0;}

    Circle(double r) : radius(r)
    {  
        cout << "---Entered Parameterized constructor---" << endl;
    }

    Circle(const Circle& other)
    {
        cout << "\n---Entered copy constructor---" << endl;
        radius = other.radius;
        cout << "\n---Leaved copy constructor---" << endl;

    }

    void copyRadius()
    {

    }

    double getArea()
    {
        return (M_PI * radius * radius);
    }

    double getCircumference()
    {
        return (2 * M_PI * radius);
    }

    double getDiameter()
    {
        return (2 * radius);
    }

    void show()
    {
        cout << "Radius of Circle is: " << radius << endl;
        cout << "Area of Circle is: " << getArea() << endl;
        cout << "Circumference of Circle is: " << getCircumference() << endl;
        cout << "Diameter of Circle is: " << getDiameter() << endl;

    }
};

void test_circle();

int main()
{
    test_circle();

    return 0;
}

void test_circle()
{
    Circle c1(5);

    Circle c2(c1);

    //cout << "radius(c1): " <<;

    c2.show();
}

