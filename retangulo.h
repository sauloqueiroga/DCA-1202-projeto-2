#ifndef RETANGULO_H
#define RETANGULO_H
#include "Screen.h"
#include "Reta.h"


class Retangulo{
private:
  int posicaoX, posicaoY, largura, altura;

public:
    Retangulo(int x, int y, int l, int a);
    void informacoes();
    void draw(Screen &t);
};

#endif // RETANGULO_H
