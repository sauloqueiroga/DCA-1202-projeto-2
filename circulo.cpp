#include <iostream>
#include "Circulo.h"
#include "FiguraGeometrica.h"
#include "Screen.h"
#include <cmath>

using namespace std;

Circulo::Circulo(int mx, int my, int raio, int mode){
    x = mx;
    y = my;                                                          // x e y sao o centro do circulo
    r = raio;
    modo = mode;                                                    // modo: cheio ou vazio
}

void Circulo::informacoes(){
    cout << "Ponto central: ( " << x << "; " << y << ")\n" ;        //imprime as informacoes da figura
    cout << "Raio: " << r << endl;
}

void Circulo::draw(Screen &t){

    for(int i = (x - r); i <= (x + r); i++){
        for(int j = (y - r); j <= (y + r); j++){

            float aux = (pow( (i-x), 2) + pow( (j-y), 2));
            aux = (pow( aux, 0.5));
            if(modo == 0){
                if( (int)aux == r){
                    t.setPixel( i, j);
                }
            }else if( modo > 0){
                if( (int)aux <= r){
                    t.setPixel( i, j);
                }
            }
        }
    }
}
