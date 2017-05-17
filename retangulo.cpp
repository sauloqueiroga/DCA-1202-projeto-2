#include "Retangulo.h"
#include "FiguraGeometrica.h"
#include "Screen.h"
#include "Reta.h"


Retangulo::Retangulo(int x, int y, int l, int a){
    posicaoX = x;
    posicaoY = y;
    largura = l;
    altura = a;
}


void Retangulo::informacoes(){
    cout << " Altura: " << altura << endl;
    cout << " Largura: " << largura << endl << endl;
}


void Retangulo::draw(Screen &t){

    for(int i = posicaoX; i <= (posicaoX + largura); i++){
        t.setPixel( i, posicaoY);
    }

    for(int i = posicaoY; i <= (posicaoY + altura); i++){
        t.setPixel( (posicaoX + largura), i);
    }

    for(int i = (posicaoX + largura); i >= posicaoX; i--){
        t.setPixel( i, posicaoY + altura);
    }

    for(int i = (posicaoY + altura); i >= posicaoY; i--){
        t.setPixel( posicaoX, i);
    }

}
