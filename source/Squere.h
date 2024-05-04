class Squere{
public:
	Transform transform;
	Squere(int x, int y, int length, char cchar);

	void draw(Scene &scene);
private:
	int length;
	char cchar;
};