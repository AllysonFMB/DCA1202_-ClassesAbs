#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

/**
 * @brief A classe Circulo serve para construir
 * a base do círculo.
 */
class Circulo: public FiguraGeometrica{
private:

    int x,y,raio;
    bool fill;
public:
    /**
         * @brief Circulo é o método construtor da classe Circulo
         *
         * @param x_ é a coordenada X do ponto no centro do círculo.
         *
         * @param y_ é a coordenada Y do ponto no centro do círculo.
         *
         * @param raio_ é o valor do raio do círculo.
         *
         * @param fill_ é o tipo do preenchimento. 1 - cheio e 0 - vazio
         *
         */
    Circulo(int x_, int y_, int raio_, bool fill_);
    /**
         * @brief draw é o método da classe FiguraGeometrica que serve para desenhar o círculo.
         * @param t é um ponteiro para uma variável do tipo Screen (variável da tela)   .
         */
    void draw(Screen &t);
};

#endif // CIRCULO_H
