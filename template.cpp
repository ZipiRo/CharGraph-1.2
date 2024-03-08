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

	int x[4] = {74, 84, 94, 85};
	int y[4] = {6, 1, 6, 10};

	Poligon poligon(x, y, 4, '#');
	poligon.draw(scene);

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

	char string[100] = "This is a test for the /Dynamic Character Graphics Engine for C++/";
	Text text(1, 24, string);
	text.draw(scene);

	Text textnumber(1, 25, 100);
	textnumber.draw(scene);

	scene.paint();
	
	bool running = true;
	while (running){
		input.event();
		if (input.keyPressed(ESCAPE))
			running = false;
	}

	return 0;
}