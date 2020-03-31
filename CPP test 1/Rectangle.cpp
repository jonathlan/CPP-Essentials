#include "Rectangle.h"

// It's better to separate the actual implementation (definition) from the declaraion in header file
void Rectangle::resize(int newWidth, int newHeight)
{
	_width = newWidth;
	_height = newHeight;
}

//Area
int Rectangle::area()
{
	return _width * _height;
}