#include <cmath>
#include "Scene.h"
#include "Point.h"
#include "Elipse.h"
#include "FilledElipse.h"

FilledElipse::FilledElipse(int x, int y, int width, int height, char cchar, char fchar) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->cchar = cchar;
	this->fchar = fchar;
}

char image[HEIGHT][WIDTH];
void FilledElipse::draw(Scene& scene) {
	Point* p;
	
	//make a image of the outline of circle
	for (float angle = 0.03f; angle <= (2.00f * 3.14159); angle += 0.01f) {
		int dx = 2 * width * sin(angle);
		int dy = height * cos(angle);

		image[y + dy][x + dx] = cchar;
	}

	int iy =  y - height + 2;
	int jy = y + height - 2;
	int n = x;

	while (iy <= y) {
		while (image[iy][n] != cchar) n++;

		for (int ix = x; ix <= n; ix++) {
			// first cadran
			p = new Point(ix, iy, fchar);
			p->draw(scene);
			// second cadran
			p = new Point(x + ix - n, iy, fchar);
			p->draw(scene);
			// third cadran
			p = new Point(x + ix - n, jy, fchar);
			p->draw(scene);
			// forth cadran
			p = new Point(ix, jy, fchar);
			p->draw(scene);
		}
		iy++; jy--;
	}

	Elipse* elipse = new Elipse(x, y, width, height, cchar);
	elipse->draw(scene);
}