#include "Scene.h"
#include "Point.h"
#include "Line.h"
#include "Squere.h"
#include "FilledSquere.h"

FilledSquere::FilledSquere(int x, int y, int length, char cchar, char fchar) {
	this->x = x;
	this->y = y;
	this->length = length;
	this->cchar = cchar;
	this->fchar = fchar;
}

void FilledSquere::draw(Scene& scene) {
	Line* side[5];
	Point* fill;

	int width = 2 * length + (x - 1);
	int height = length + (y - 1);

	for (int ix = x; ix <= width; ix++)
		for (int jy = y; jy <= height; jy++) {
			fill = new Point(ix, jy, fchar);
			fill->draw(scene);
	}

	Squere* squere = new Squere(x, y, length, cchar);
	squere->draw(scene);
}