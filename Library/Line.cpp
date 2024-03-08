#include "Scene.h"
#include "Point.h"
#include "Line.h"

Line::Line(int x, int y, int fx, int fy, char cchar) {
	this->x = x;
	this->y = y;
	this->fx = fx;
	this->fy = fy;
	this->cchar = cchar;
}

void Line::draw(Scene& scene) {
    if (x == fx) {
        if (y > fy) {
            int aux = y;
            y = fy;
            fy = aux;
        }

        Point* point;
        for (int y = this->y; y <= this->fy; y++) {
            point = new Point(x, y, cchar);
            point->draw(scene);
        }

        return;
    }

    int dx = fx - x;
    int dy = fy - y;

    Point* point;
    if (x < fx) {
        for (int x = this->x; x <= this->fx; x++) {
            int y = this->y + dy * (x - this->x) / dx;
            point = new Point(x, y, cchar);
            point->draw(scene);
        }
    } else {
        for (int x = this->fx; x <= this->x; x++) {
            int y = this->y + dy * (x - this->x) / dx;
            point = new Point(x, y, cchar);
            point->draw(scene);
        }
    }

}