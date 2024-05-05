class Text{
public:
	Transform transform;

	Text();
	Text(int x, int y, int number);
	Text(Vector2D position, int number);
	Text(int x, int y, char* text);
	Text(Vector2D position, char* text);
	
	void draw(Scene& scene);
	void set(char* text);
	void set(int number);
private:
	int length;
	char* text;
};