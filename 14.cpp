#include <iostream>

using namespace std;

struct dados{

    string nome;
    float primeiro_mes, segundo_mes, terceiro_mes;
    int pontos;

};

int main(){

int t = 3, maior_pontuacao = 0;
string ganhador;
float soma = 0;
dados vendedores[t];

for (int i = 0; i < t; i++){

    cin >> vendedores[i].nome;
    cin >> vendedores[i].primeiro_mes;
    cin >> vendedores[i].segundo_mes;
    cin >> vendedores[i].terceiro_mes;
    soma += (vendedores[i].primeiro_mes + vendedores[i].segundo_mes + vendedores[i].terceiro_mes);
    vendedores[i].pontos = (vendedores[i].primeiro_mes + vendedores[i].segundo_mes + vendedores[i].terceiro_mes)/100;

    if(vendedores[i].pontos > maior_pontuacao){
        maior_pontuacao = vendedores[i].pontos;
        ganhador = vendedores[i].nome;
    }
}

for (int i = 0; i < t; i++)
{
    cout << vendedores[i].nome << " " << vendedores[i].pontos << endl;    
}

cout << ganhador << endl;
cout << soma;


}