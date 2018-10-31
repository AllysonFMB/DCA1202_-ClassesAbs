#ifndef PONTO_H
#define PONTO_H
#include "figurageometrica.h"
#include "screen.h"

class Ponto : public FiguraGeometrica{
private:
    int x,y;
    char brush;
public:
    Ponto(int _x, int _y, char brush_);
    void draw(Screen &t);
};

#endif // PONTO_H
