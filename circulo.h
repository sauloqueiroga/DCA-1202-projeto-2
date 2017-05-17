#ifndef CIRCULO_H
#define CIRCULO_H
#include "Screen.h"


class Circulo {
private:
    int x, y, r, modo;
public:
    Circulo(int x,int y,int raio,int mode = 0);
    void informacoes();
    void draw(Screen &t);

};

#endif // CIRCULO_H
