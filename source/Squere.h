class Squere{
public:
	Transform transform;
	char cchar;

	Squere();
	Squere(int x, int y, int length, char cchar);
	Squere(Vector2D position, int length, char cchar);

	void draw(Scene &scene);
};