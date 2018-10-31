#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**
 * @brief A classe FiguraGeometrica é a classe origem do projeto
 */
class FiguraGeometrica
{
public:
    /**
    * @brief FiguraGeometrica é o construtor da classe
    * FiguraGeometrica.
    */
    // o '=0' apos o nome do metodo
    // cria uma FUNCAO VIRTUAL PURA

    /**
        * @brief draw é o método para desenhar usado em todas as classes herdeiras da
        * FiguraGeometrica. Serve para desenhar as
        * figuras geométricas.
        * @param t é um ponteiro para uma variável do tipo
        * Screen.
        */
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
