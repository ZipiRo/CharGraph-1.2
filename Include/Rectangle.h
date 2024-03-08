class Rectangle
{
public:
	Rectangle(int x, int y, int width, int height, char cchar);

	void draw(Scene &scene);
private:
	int x;
	int y;
	int width;
	int height;
	char cchar;
};