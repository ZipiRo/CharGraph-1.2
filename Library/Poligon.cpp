#include "Scene.h"
#include "Line.h"
#include "Poligon.h"

Poligon::Poligon(int x[100], int y[100], int sides, char cchar) {
	this->x = x;
	this->y = y;
	this->sides = sides;
	this->cchar = cchar;
}

void Poligon::draw(Scene &scene) {
    Line* l[100];
    int i = 0;

    for (i; i < sides - 1; i++) {
        l[i] = new Line(x[i], y[i], x[i + 1], y[i + 1], cchar);
        l[i]->draw(scene);
    }

    l[i + 1] = new Line(x[i], y[i], x[0], y[0], cchar);
    l[i + 1]->draw(scene);
}