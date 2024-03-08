#define WIDTH 200
#define HEIGHT 100

class Scene{
public:
	char canvas[HEIGHT][WIDTH];
	char cchar;
	int width;
	int height;

	Scene(int width, int height, char cchar);

	void fill(char cchar);
	void paint();
	void clear();
};