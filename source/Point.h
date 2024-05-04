class Point{
public:
	Transform transform;

	Point(int x, int y, char cchar);

	void draw(Scene &scene);
private:
	char cchar;
};