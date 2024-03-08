class Point{
public:
	Point(int x, int y, char cchar);

	void draw(Scene &scene);
private:
	int x;
	int y;
	char cchar;
};