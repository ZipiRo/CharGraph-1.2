class Elipse{
public:
	Transform transform;
	char cchar;

	Elipse();
	Elipse(int x, int y, int width, int height, char cchar);
	Elipse(Vector2D position, Vector2D scale, char cchar);

	void draw(Scene& scene);
private:
};