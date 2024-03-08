#include <conio.h>
#include "Input.h"

Input::Input() {
    curentKey = 0;
};

void Input::event() {
    curentKey = 0;
    if (_kbhit())
        curentKey = _getch();
}

bool Input::keyPressed(int code) {
    if (curentKey == code) return true;
    else return false;
}

int Input::get_curentkey() {
    return curentKey;
}