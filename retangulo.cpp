#include "retangulo.h"
#include <iostream>
#include "screen.h"
using namespace std;

Retangulo::Retangulo(int x_, int y_,int larg_, int alt_, bool fill_){
    x = x_;
    y = y_;
    alt = alt_;
    larg = larg_;
    fill = fill_;
}


void Retangulo::draw(Screen &t){

    if(fill){
        for(int i=x; i<(x+larg); i++){
            for(int j=y;j<(y+alt); j++){
                t.setPixel(i,j);
            }
        }
    }
    else{
        for(int i=x; i<x+larg; i++){
            t.setPixel(i, y);
            t.setPixel(i, y+alt);
        }
        for(int j=y; j<y+alt; j++){
            t.setPixel(x,j);
            t.setPixel(x+larg-1, j);
        }
    }
}
