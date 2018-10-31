#include <iostream>
#include "screen.h"
#include "reta.h"
#include "figurageometrica.h"
#include "retangulo.h"
#include "circulo.h"
#include <vector>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char brush;
    int x0, y0, x1, y1, larg, alt, raio;
    bool fill;
    ifstream input;
    ofstream output;
    Screen tela(10,10);
    char comando[10];
    input.open("/Users/Casa/Desktop/Classes_Abstratas11/input.txt");

    if(input.is_open()){
        cout<<"Arquivo de entrada aberto"<<endl;
    }
    else{
        cout<<"Falha ao tentar abrir arquivo de entrada"<<endl;
    }

    input>>comando;

    while(input.good()){
        if(strcmp("dim", comando)==0){
            input>>x0>>y0;
            tela = Screen(x0,y0);
        }
        else if(strcmp("line", comando)==0){
            input>>x0>>y0>>x1>>y1>>brush;
            Reta r(x0,y0,x1,y1);
            tela.setBrush(brush);
            r.draw(tela);
        }

        else if(strcmp("circle", comando)==0){
            input>>x0>>y0>>raio>>fill>>brush;
            Circulo c(x0,y0,raio,fill);
            tela.setBrush(brush);
            c.draw(tela);
        }
        else if(strcmp("rectangle", comando)==0){
            input>>x0>>y0>>larg>>alt>>fill>>brush;
            Retangulo W(x0, y0, larg, alt, fill);
            tela.setBrush(brush);
            W.draw(tela);
        }
        input>>comando;
    }

    input.close();

    output.open("/Users/Casa/Desktop/Classes_Abstratas11/output.txt");
    if(!output.is_open()){
        cout<<"Falha ao abrir o arquivo de saida"<<endl;
    }

    output<<tela;

    output.close();
    return 0;
}
