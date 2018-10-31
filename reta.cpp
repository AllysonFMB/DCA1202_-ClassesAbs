#include "reta.h"
#include <iostream>
using namespace std;

Reta::Reta(int xa_, int ya_, int xb_, int yb_){
    x1 = xa_;
    y1 = ya_;
    x2 = xb_;
    y2 = yb_;

}
int sinal(int w);
void Reta::draw(Screen &t){
    x = x1;
    y = y1;
    int Delta_x, Delta_y, s1, s2, Troca, Temp, new_e,i;
    Delta_x = abs(x2 - x1);
    Delta_y = abs(y2 - y1);
    s1= sinal(x2 - x1);
    s2= sinal(y2 - y1);
    if(Delta_y > Delta_x){
      Temp = Delta_x;
      Delta_x = Delta_y;
      Delta_y = Temp;
      Troca = 1;
    }
    else{
      Troca = 0;
    }
    new_e = 2*Delta_y - Delta_x;
    for(i=1; i<= Delta_x; i++){
      t.setPixel(x,y);
      while (new_e >= 0){
        if(Troca == 1){
          //Muda para a proxima linha de rasterização
          x = x + s1;
        }
        else{
          y = y + s2;
        }
        new_e = new_e - 2*Delta_x;
      }

      //Permanece nesta linha de rasterização
      if(Troca == 1){
        y = y + s2;
      }
      else{
        x = x + s1;
      }
      new_e= new_e + 2*Delta_y;
    }

}
int sinal(int w){
    if(w>0){
        return 1;
    }
    if(w=0){
        return 0;
    }
    if(w<0){
        return -1;
    }
}
