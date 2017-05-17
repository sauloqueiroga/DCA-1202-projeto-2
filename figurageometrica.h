#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "Screen.h"

class FiguraGeometrica{
public:
    FiguraGeometrica();
    virtual void informacoes() = 0;
    virtual void draw(Screen&t) = 0;
};

#endif // FIGURAGEOMETRICA_H
