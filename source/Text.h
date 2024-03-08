class Text{
public:
	Text(int x, int y, int number);
	Text(int x, int y, char* text);
	
	void draw(Scene& scene);
	void set(char* text);
	void set(int number);
private:
	int x;
	int y;
	int length;
	char* text;
};