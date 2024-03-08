#include "Scene.h"
#include "Line.h"
#include "Rectangle.h"

Rectangle::Rectangle(int x, int y, int width, int height, char cchar) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->cchar = cchar;
}

void Rectangle::draw(Scene& scene) {
	Line* side[5];

	width = 2 * width + (x - 1);
	height = height + (y - 1);

	side[0] = new Line(x, y, width, y, cchar);
	side[1] = new Line(width, y, width, height, cchar);
	side[2] = new Line(width, height, x, height, cchar);
	side[3] = new Line(x, height, x, y, cchar);

	for (int i = 0; i < 4; i++)
		side[i]->draw(scene);
}