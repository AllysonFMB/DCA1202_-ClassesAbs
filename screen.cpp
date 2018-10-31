#include "screen.h"
#include <iostream>
#include <vector>

using namespace std;

Screen::Screen()
{

}

Screen::Screen(int _ncol, int _nlin){
    nlin = _nlin;
        ncol = _ncol;
        tela = vector<vector<char>>(nlin, vector<char>(ncol,' '));
}

void Screen::setPixel(int x, int y){
    if((x<ncol) && (y<nlin) && (x>0) && (y>0)){
          tela[x][y] = brush;
       }
}


void Screen::setBrush(char novoBrush){
    brush = novoBrush;
}

void Screen::printScreen(){
    for(int i = 0; i < ncol; i++){
        for(int j = 0; j < nlin; j++){
            cout << tela[i][j] << " ";
        }
        cout << endl;
    }
}
void Screen::clear(){
    for(int i=0; i<tela.size(); i++){
        for(int j=0; j<tela[i].size(); j++){
            tela[i][j] = ' ';
        }
    }
}

char Screen::getBrush(){
    return brush;
}

ostream& operator << (ostream &saida,Screen &t)
{
    for(int i = 0; i < t.ncol; i++){
        for(int j = 0; j < t.nlin; j++){
            saida << t.tela[i][j];
        }
        saida << endl;
    }
    return saida;
}

