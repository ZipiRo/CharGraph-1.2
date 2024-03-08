class Line{
public: 
	int x;
	int y;
	int fx;
	int fy;
	char cchar;

	Line(int x, int y, int fx, int fy, char cchar);

	void draw(Scene& scene);
};