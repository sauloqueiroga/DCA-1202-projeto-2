#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <iostream>

using namespace std;

class Screen{
private:
    int nlin, ncol;                                                         // armazenam o tamanho da tela de desenho
                                                                            // no de linhas e de colunas

    char brush;                                                             // guarda o caractere usado para desenhar

    vector < vector<char> > mat;                                            // armazena a matriz da tela

public:
    Screen(int l, int c);                                                 // construtor da classe

    void setPixel(int x, int y);                                            // desenha um pixel da matriz usando o
                                                                            // caractere guardado em 'brush'

    void clear();                                                           // limpa a tela

    void setBrush(char brush);                                              // muda o caractere de desenho

    void toDraw(void);

    friend ostream& operator<<(ostream &os, Screen &t);                     // envia a tela para um stream de saida
};

#endif // SCREEN_H
