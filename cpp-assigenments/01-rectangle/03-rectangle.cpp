/*
    create a class rectangle with data members height and width. include public member function to set and get these values

    author: munja
*/

#include <iostream>
using namespace std;

class RECTANGLE
{
private:
    double height;
    double width;

public:
    RECTANGLE(double _width, double _height) : height(_width), width(_height) {}

    int get_height()
    {
        return this->height;
    }

    int get_width()
    {
        return this->width;
    }

    void set_height(double new_height)
    {
        this->height = new_height;
    }

    void set_width(double new_width)
    {
        this->width = new_width;
    }

    double area_of_rectangle()
    {
        return (this->width * this->height);
    }

    double perimeter_of_rectangle()
    {
        return (2 * (this->width + this->height));
    }

    double digonal_of_rectangle()
    {
        return (sqrt((width * width) + (height * height)));
    }

    void show()
    {
        std::cout << "width: " << width << ", height: " << height << std::endl;
    }
};

void rectangle(void);

int main(void)
{

    rectangle();

    return 0;
}

void rectangle(void)
{
    RECTANGLE rectangle(0.0, 0.0);

    cout << "Showing current width and height of rectangle: ";
    rectangle.show();
    rectangle.set_width(6.5);
    rectangle.set_height(3.5);

    cout << "showing new width and height of rectangle ";
    rectangle.show();

    cout << "area of rectangle is: " << rectangle.area_of_rectangle() << endl;
    cout << "perimeter of rectangle is: " << rectangle.perimeter_of_rectangle() << endl;
    cout << "digonal of rectangle is: " << rectangle.digonal_of_rectangle() << endl;

    
}
