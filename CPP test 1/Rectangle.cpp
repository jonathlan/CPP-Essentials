#include "Rectangle.h"

// It's better to separate the actual implementation (definition) from the declaraion in header file
void Rectangle::resize(int newWidth, int newHeight)
{
	_width = newWidth;
	_height = newHeight;
}

//Area
int Rectangle::area() const // Area is constant because it does not modify the object, only provides with the value of the area.
{
	return _width * _height;
}