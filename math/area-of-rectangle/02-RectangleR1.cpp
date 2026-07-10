#include<iostream>

class Rectangle
{
    public:
    typedef double width_t;
    typedef double height_t;

    private:
    width_t width;
    height_t height;

    public:
    Rectangle(width_t _width, height_t _height)
    {
        if(_width <= 0 || _height <= 0)
        {
            std::cerr << "Bad value of _width and _height" << std::endl;

            return;
        }

        width = _width > 0.0 ? _width : 1.0;
        height = _height > 0.0 ? _height : 1.0;
    }

    width_t getWidth() const
    {
        return(this->width);
    }

    height_t getHeight() const
    {
        return(this->height);
    }

    void setWidth(width_t new_width)
    {
        if(new_width <= 0)
        {
            std::cerr << "new_width value is invalid" << std::endl;
            return;
        }
        this->width = new_width;
    }

    void setHeight(height_t new_height)
    {
        if(new_height <= 0)
        {
            std::cerr << "new_height is invalid" << std::endl;
            return;
        }
        this->height = new_height;
    }
};