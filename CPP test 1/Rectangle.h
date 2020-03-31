
class Rectangle
{
private:
	int _width;
	int _height;	
public:
	//Constructors
	Rectangle() : _width { 1 }, _height { 1 }
	{}

	Rectangle(int initialWidth, int initialHeight)
		: _width{ initialWidth }, _height { initialHeight }
	{}

	// Properties
	int get_Width() const { return _width; }
	int get_Heigth() const { return _height; }

	//Methods
	void resize(int newWidth, int newHeight);
	int area() const; // Area is constant because it does not modify the object, only provides with the value of the area.
};