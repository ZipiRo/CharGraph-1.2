class Line{
public: 
	Vector2D origin;
	Vector2D range;
	char cchar;

	Line();
	Line(int x, int y, int fx, int fy, char cchar);
	Line(Vector2D origin, Vector2D range, char cchar);

	void draw(Scene& scene);
};