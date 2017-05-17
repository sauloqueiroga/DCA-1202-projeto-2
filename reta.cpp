#include <iostream>
#include <cmath>
#include "Reta.h"
#include "Screen.h"

using namespace std;

Reta::Reta(int px1, int py1, int px2, int py2){
    x1 = px1;                                               //coloca os pontos final e inicial
    y1 = py1;
    x2 = px2;
    y2 = py2;
}

void Reta::informacoes(){
    cout << "Ponto inicial: ( " << x1 << "; " << y1 << ")\n" ;
    cout << "Ponto final: ( " << x2 << "; " << y2 << ")\n";
    cout << endl;
}

void Reta::draw(Screen &t){

    int nl = abs(y2-y1) + 1;
    int nc = abs(x2-x1) + 1;


    if(x1 < x2 && y1 == y2){
        for(int i = x1; i <= x2; i++){
            t.setPixel(i,y1);
        }
    }

    else if(x1 > x2 && y1 == y2){
        for(int i = x2; i <= x1; i++){
            t.setPixel(i,y1);
        }
    }

    else if(y1 < y2 && x1 == x2){
        for(int i = y1; i <= y2; i++){
            t.setPixel(x1,i);
        }
    }

    else if(y1 > y2 && x1 == x2){
        for(int i = y2; i <= y1; i++){
            t.setPixel(x1,i);
        }
    }

    else if(x1 < x2 && y1 < y2){
            for(int i = x1; i <= x2; i++){
                for(int j = y1; j <= y2; j++){
                    if(i == j)
                        t.setPixel(i,j);
                }
            }
    }

    else if(x1 > x2 && y1 > y2){

            for(int i = x2; i <= x1; i++){
                for(int j = y2; j <= y1; j++){
                    if(i == j)
                        t.setPixel(i,j);
                }
            }
    }

    else if(x1 < x2 && y1 > y2){
            for(int i = x1; i <= x2; i++){
                for(int j = y1; j >= y2; j--){
                        t.setPixel(i,j);
                        y1--;
                        break;
                }
            }
    }

    else if(x1 > x2 && y1 < y2){
            for(int i = y1; i <= y2; i++){
                for(int j = x1; j >= x2; j--){
                        t.setPixel(j,i);
                        x1--;
                        break;
                }
            }
    }
}
