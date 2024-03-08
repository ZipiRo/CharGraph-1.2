#include <iostream>
#include <cstring>
#include "Scene.h"

Scene::Scene(int width, int height, char cchar) {
	this->width = width;
	this->height = height;
	this->cchar = cchar;

	for (int y = 1; y <= height; y++)
		for (int x = 1; x <= width; x++)
			canvas[y][x] = cchar;
}

void Scene::fill(char cchar) {
	for (int y = 1; y <= height; y++)
		for (int x = 1; x <= width; x++)
			canvas[y][x] = cchar;
}

void Scene::paint() {
	system("cls");
	for (int y = 1; y <= height; y++) {
		for (int x = 1; x <= width; x++)
			std::cout << canvas[y][x];
		std::cout << '\n';
	}
}

void Scene::clear() {
	for (int y = 1; y <= height; y++)
		for (int x = 1; x <= width; x++)
			canvas[y][x] = cchar;
}