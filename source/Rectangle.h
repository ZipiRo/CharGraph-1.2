class Rectangle{
public:
	Transform transform;

	Rectangle(int x, int y, int width, int height, char cchar);

	void draw(Scene &scene);
private:
	int width;
	int height;
	char cchar;
};