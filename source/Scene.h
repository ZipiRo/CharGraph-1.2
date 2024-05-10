#define WIDTH 200
#define HEIGHT 100

class Scene{
public:
	char canvas[HEIGHT][WIDTH];
	char cchar;
	int width;
	int height;

	Scene(int, int, char);

	void fill(char);
	void paint();
	void clear();
};