#include "source\CharGraph++.h"

Scene scene(100, 30, ' ');
Input input;

int main() {
	Rectangle rW(1, 1, 10, 5, '#');
	rW.draw(scene);

	Rectangle rH(22, 1, 5, 10, '#');
	rH.draw(scene);
	
	Squere squere(33, 1, 10, '#');
	squere.draw(scene);

	Elipse circle(63, 6, 5, 5, '#');
	circle.draw(scene);

	Vector2D points[] = {
		Vector2D(74, 6),
		Vector2D(83, 1),
		Vector2D(90, 6),
		Vector2D(83, 10)
	};

	Poligon po(points, 4, '#');
	po.draw(scene);

	FilledRectangle frW(1, 11, 10, 5, '#', ':');
	frW.draw(scene);

	FilledRectangle frH(22, 11, 5, 10, '#', ':');
	frH.draw(scene);

	FilledSquere fs(33, 11, 10, '#', ':');
	fs.draw(scene);

	FilledElipse fe(63, 16, 5, 5, '#', ':');
	fe.draw(scene);

	Line l(1, 22, 60, 22, '#');
	l.draw(scene);

	Point p(63, 22, '#');
	p.draw(scene);

	char string[101] = "This is a test for the /Dynamic Character Graphics Engine for C++/";
	Text text(1, 24, string);
	text.draw(scene);

	Text textnumber(1, 25, 100);
	textnumber.draw(scene);

	scene.paint();
	
	bool running = true;
	while (running){
		input.event();
		if(input.anykey())
			running = false;
	}

	return 0;
}