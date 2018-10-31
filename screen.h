#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;
/**
 * @brief A classe Screen construção da tela e toda base de informações para constuir os desenhos */

class Screen{
private:

    int nlin, ncol;
    char brush ;
    /**
       * @brief tela é a matriz de vetores de caracteres onde serão desenhadas
       * as figuras geométricas.
       */
    vector< vector<char> > tela;
public:
    /**
      * @brief Screen é o construtor da classe
      * Screen.
      */
    Screen();

    /**
      * @brief Screen é o método construtor da classe
      * Screen.
      * @param nlin é a quantidade de linhas de pixels
      * da tela.
      * @param ncol é a quantidade de colunas de
      * pixels da tela.
      */
    Screen(int ncol_, int nlin_);

    /**
       * @brief O método setPixel serve para desenhar um pixel na tela.
       * @param x é a coordenada X do ponto onde o pixel será desenhado.
       * @param y é a coordenada Y do ponto onde o pixel será desenhado.
       */
    void setPixel(int x, int y);
    /**
       * @brief O método setBrush escolha do caractere de desenho.
       */
    void setBrush(char novoBrush);
    /**
       * @brief O método printScreen printa na tela.
       */
    void printScreen();
    /**
       * @brief O método clear limpa a tela.
       */
    void clear();
    /**
       * @brief O método getBrush retorna o char do caractere usado na tela.
       */
    char getBrush();
    /**
      * @brief operator << sobrecarga do operador <<
      * @param os
      * @param t
      * @return
      */
    friend ostream& operator << (ostream &saida, Screen &t);
};

#endif // SCREEN_H
