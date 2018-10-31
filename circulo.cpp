#include "circulo.h"
#include "reta.h"
#include <cmath>
#include <iostream>

Circulo::Circulo(int x_, int y_, int raio_, bool fill_){
    x = x_;
    y = y_;
    raio = raio_;
    fill = fill_;
}

void Circulo::draw(Screen &t){
    float dp;
        if(!fill){
            for(int i=(x-raio); i<=(x+raio); i++){
                for(int j=(y-raio); j<=(y+raio); j++){
                    dp = sqrt((i-x)*(i-x)+(j-y)*(j-y));
                    if(ceil(dp)==raio){
                        t.setPixel(i,j);
                    }
                }
            }
        }
        else{
            for(int i=(x-raio); i<=(x+raio); i++){
                for(int j=(y-raio); j<=(y+raio); j++){
                    if( sqrt((i-x)*(i-x)+(j-y)*(j-y)) <= raio){
                        t.setPixel(i,j);
                    }
                }

            }

        }

    }
