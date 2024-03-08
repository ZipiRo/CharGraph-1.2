#include "include\C_GraphicsEngine.h"
#include <iostream>

Scene s(100, 30, ' ');
Input i;

int main() {
	Rectangle rW(1, 1, 10, 5, '#');
	rW.draw(s);

	Rectangle rH(22, 1, 5, 10, '#');
	rH.draw(s);
	
	Squere squere(33, 1, 10, '#');
	squere.draw(s);

	Elipse circle(63, 6, 5, 5, '#');
	circle.draw(s);

	int x[4] = {74, 84, 94, 85};
	int y[4] = {6, 1, 6, 10};

	Poligon poligon(x, y, 4, '#');
	poligon.draw(s);

	FilledRectangle frW(1, 11, 10, 5, '#', ':');
	frW.draw(s);

	FilledRectangle frH(22, 11, 5, 10, '#', ':');
	frH.draw(s);

	FilledSquere fs(33, 11, 10, '#', ':');
	fs.draw(s);

	FilledElipse fe(63, 16, 5, 5, '#', ':');
	fe.draw(s);

	Line l(1, 22, 60, 22, '#');
	l.draw(s);

	Point p(63, 22, '#');
	p.draw(s);

	char string[100] = "This is a test for the /console charachter graphics engine/";
	Text t(1, 24, string);
	t.draw(s);

	Text tn(1, 25, 100);
	tn.draw(s);

	s.paint();
	
	bool running = true;
	while (running){
		i.event();
		if (i.keyPressed(27))
			running = false;
	}

	return 0;
}