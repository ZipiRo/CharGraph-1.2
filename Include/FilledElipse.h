class FilledElipse
{
public:
	FilledElipse(int x, int y, int width, int height, char cchar, char fchar);

	void draw(Scene& scene);
private:
	int x;
	int y;
	int width;
	int height;
	char cchar;
	char fchar;
};