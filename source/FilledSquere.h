class FilledSquere{
public:
	Transform transform;

	FilledSquere(int x, int y, int length, char cchar, char fchar);

	void draw(Scene& scene);
private:
	int length;
	char cchar;
	char fchar;
};