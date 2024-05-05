class Poligon{
public:
	Transform transform;
	char cchar;
	
	Poligon();
	Poligon(Vector2D points[], int sides, char cchar);

	void draw(Scene &scene);
private:
	Vector2D points[1000];
	int sides;
};