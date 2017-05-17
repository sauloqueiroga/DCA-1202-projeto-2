#include "Screen.h"
#include "FiguraGeometrica.h"
#include "Reta.h"
#include "Retangulo.h"
#include "Circulo.h"
#include <vector>

using namespace std;

int main(){
    Screen d(18,18);
    Reta r(0,0,18,18);
    Retangulo re(2,2,15,15);
    Circulo c(10,10,7,1);

    r.informacoes();
    d.setBrush('X');
    r.draw(d);
    d.toDraw();
    return 0;
}
