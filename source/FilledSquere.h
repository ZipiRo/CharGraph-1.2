class FilledSquere{
public:
	FilledSquere(int x, int y, int length, char cchar, char fchar);

	void draw(Scene& scene);
private:
	int x;
	int y;
	int length;
	char cchar;
	char fchar;
};