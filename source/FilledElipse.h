class FilledElipse{
public:
	Transform transform;

	FilledElipse(int x, int y, int width, int height, char cchar, char fchar);

	void draw(Scene& scene);
private:
	int width;
	int height;
	char cchar;
	char fchar;
};