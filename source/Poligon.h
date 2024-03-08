class Poligon
{
public:
	Poligon(int x[100], int y[100], int sides, char cchar);

	void draw(Scene &scene);
private:
	int* x;
	int* y;
	int sides;
	char cchar;
};