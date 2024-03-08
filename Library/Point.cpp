#include "Scene.h"
#include "Point.h"

Point::Point(int x, int y, char cchar) {
	this->x = x;
	this->y = y;
	this->cchar = cchar;
}

void Point::draw(Scene &scene) {
	scene.canvas[y][x] = cchar;
}