class FilledRectangle{
public:
	Transform transfrom;

	FilledRectangle(int x, int y, int width, int height, char cchar, char fchar);

	void draw(Scene& scene);
private:
	int width;
	int height;
	char cchar;
	char fchar;
};