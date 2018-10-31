#include "ponto.h"
#include <iostream>
#include "screen.h"
using namespace std;

Ponto::Ponto(int _x, int _y, char brush_){
    x = _x;
    y = _y;
    brush = brush_;
}

void Ponto::draw(Screen &t){
    t.setBrush(brush);
    t.setPixel(x,y);
}
