#include <iostream>

using namespace std;

struct ponto {
    int x, y;
};

struct retangulo {
    int x1, y1, x2, y2;  
};

int tadento(int x, int y, int x1, int y1, int x2, int y2){

    int contador = 0;
    if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
        contador ++;
    }
    return contador;
}

int main(){

int tamanho;
ponto normal;

cin >> normal.x >> normal.y;
cin >> tamanho;

retangulo rets[tamanho];

int total = 0;

for( int i = 0; i < tamanho; i++){
    cin >> rets[i].x1 >> rets[i].y1;
    cin >> rets[i].x2 >> rets[i].y2;
    total += tadento(normal.x, normal.y, rets[i].x1, rets[i].y1, rets[i].x2, rets[i].y2);
}
    cout << total;
}

