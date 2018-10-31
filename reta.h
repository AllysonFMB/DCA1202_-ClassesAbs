#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
/**
 * @brief A classe Reta serve para construir
 * a base da reta.
 */
class Reta : public FiguraGeometrica{
    int x, y;
    int x1,x2,y1,y2;
    char brush;
public:
  Reta(int xa_, int ya_, int xb_, int yb_);
  void draw(Screen &t);
};

#endif // RETA_H
