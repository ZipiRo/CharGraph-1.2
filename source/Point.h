class Point{
public:
	Transform transform;
	char cchar;

	Point();
	Point(int x, int y, char cchar);
	Point(Vector2D position, char cchar);

	void draw(Scene &scene);
};