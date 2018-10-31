#ifndef RETANGULO_H
#define RETANGULO_H
#include <iostream>
#include <ostream>
#include <vector>
#include "figurageometrica.h"

using namespace std;

/**
 * @brief A classe Retangulo serve para construir
 * a base do retângulo.
 */
class Retangulo: public FiguraGeometrica {
private:
    int x, y, alt, larg;
    bool fill;
    char brush;

public:
    Retangulo(int x_, int y_, int larg_,int alt_, bool fill_);
    void draw(Screen &t);
};


#endif // RETANGULO_H
