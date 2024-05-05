class Rectangle{
public:
	Transform transform;
	char cchar;

	Rectangle();
	Rectangle(int x, int y, int width, int height, char cchar);
	Rectangle(Vector2D position, Vector2D scale, char cchar);

	void draw(Scene &scene);
};