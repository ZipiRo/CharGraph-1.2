class Text{
public:
	Transform transform;

	Text(int x, int y, int number);
	Text(int x, int y, char* text);
	
	void draw(Scene& scene);
	void set(char* text);
	void set(int number);
private:
	int length;
	char* text;
};