class FilledElipse{
public:
	Transform transform;
	char cchar;
	char fchar;

	FilledElipse();
	FilledElipse(int x, int y, int width, int height, char cchar, char fchar);
	FilledElipse(Vector2D position, Vector2D scale, char cchar, char fchar);

	void draw(Scene& scene);
};