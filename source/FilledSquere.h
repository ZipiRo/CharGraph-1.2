class FilledSquere{
public:
	Transform transform;
	char cchar;
	char fchar;

	FilledSquere();
	FilledSquere(int x, int y, int length, char cchar, char fchar);
	FilledSquere(Vector2D position, int length, char cchar, char fchar);

	void draw(Scene& scene);
};