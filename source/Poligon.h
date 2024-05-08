class Poligon{
public:
	Transform transform;
	char cchar;
	
	Poligon();
	Poligon(int x[], int y[], int sides, int cchar);
	Poligon(Vector2D points[], int sides, char cchar);

	void draw(Scene &scene);
private:
	Vector2D points[1000];
	int sides;
};