class FilledRectangle{
public:
	Transform transform;
	char cchar;
	char fchar;

	FilledRectangle();
	FilledRectangle(int x, int y, int width, int height, char cchar, char fchar);
	FilledRectangle(Vector2D position, Vector2D scale, char cchar, char fchar);

	void draw(Scene& scene);
};