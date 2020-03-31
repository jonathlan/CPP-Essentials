
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
	int get_Width() { return _width; }
	int get_Heigth() { return _height; }

	//Methods
	void resize(int newWidth, int newHeight);
	int area();
};