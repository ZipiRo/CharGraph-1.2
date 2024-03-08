#include "Scene.h"
#include "Line.h"
#include "Squere.h"

Squere::Squere(int x, int y, int length, char cchar) {
	this->x = x;
	this->y = y;
	this->length = length;
	this->cchar = cchar;
}

void Squere::draw(Scene& scene) {
	Line* side[5];

	int width = 2 * length + (x - 1);
	int height = length + (y - 1);

	side[0] = new Line(x, y, width, y, cchar);
	side[1] = new Line(width, y, width, height, cchar);
	side[2] = new Line(width, height, x, height, cchar);
	side[3] = new Line(x, height, x, y, cchar);

	for (int i = 0; i < 4; i++)
		side[i]->draw(scene);
}