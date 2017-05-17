#include "Screen.h"
#include "Reta.h"
#include <iostream>
#include <vector>

using namespace std;

Screen::Screen(int l, int c){
    nlin = l;
    ncol = c;
    mat = vector < vector<char> >(nlin+1, vector<char>(ncol+1));

    brush = '*';

    clear();   
}


void Screen::clear(){
    for(int i; i < nlin; i++){
        for(int j ; j < ncol; j++){
            mat[i][j] = ' ';
        }
    }
}



void Screen::setBrush(char novoCaractere){
    brush = novoCaractere;
}



void Screen::setPixel(int x, int y){
    mat[x][y]= brush;
}



void Screen::toDraw(){
    cout << "  ";
    for(int i=0; i <= ncol ;i++){
        if(i<=9){
            cout << "0" << i << " ";
        }
        else{
            cout << i << " ";
        }
    }
    cout << endl;

    for (int i=0; i <= nlin ; i++){
        for (int j=0; j <= ncol ; j++){

            if(j==0 && i >= 0 && i <= 9){
                cout << "0" << i << " ";
            }
            else if(j==0 && i>=0){
                cout << i <<" ";
            }
             cout << mat[j][i] << "  ";

        }
        cout << endl;
    }
}
