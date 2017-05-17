#ifndef RETA_H
#define RETA_H
#include "FiguraGeometrica.h"
#include "Screen.h"


class Reta{
private:
    int ncol, nlin, px1, px2;

public:
    int x1, x2, y1, y2;

    Reta(int x1, int y1, int x2, int y2);
    void informacoes();
    void draw(Screen &t);


};

#endif // RETA_H
