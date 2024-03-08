#include "Scene.h"
#include "Point.h"
#include "Line.h"
#include "Rectangle.h"
#include "FilledRectangle.h"

FilledRectangle::FilledRectangle(int x, int y, int width, int height, char cchar, char fchar) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->cchar = cchar;
	this->fchar = fchar;
}

void FilledRectangle::draw(Scene& scene) {
	Point* fill;

	int width = 2 * this->width + (x - 1);
	int height = this->height + (y - 1);

	for (int ix = x; ix <= width; ix++)
		for (int jy = y; jy <= height; jy++) {
			fill = new Point(ix, jy, fchar);
			fill->draw(scene);
	}

	Rectangle* rectangle = new Rectangle(x, y, this->width, this->height, cchar);
	rectangle->draw(scene);
}