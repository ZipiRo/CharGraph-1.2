#include <cmath>
#include "Scene.h"
#include "Point.h"
#include "Elipse.h"

Elipse::Elipse(int x, int y, int width, int height, char cchar) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->cchar = cchar;
}

void Elipse::draw(Scene& scene) {
	Point* p;
	for (float angle = 0.03f; angle <= (2.00f * 3.14159); angle+=0.01f){
		int dx = 2 * width * sin(angle);
		int dy = height * cos(angle);

		p = new Point(x + dx, y + dy, cchar);
		p->draw(scene);
	}
}