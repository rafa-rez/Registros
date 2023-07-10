#include <iostream>

using namespace std;

struct dados{

    string nome;
    int dia, mes, ano;

};

int main(){

    int tamanho;
    cin >> tamanho;

    dados pessoas[tamanho];
    dados velho;
    

    for (int i = 0; i < tamanho; i++)
    {
        cin >> pessoas[i].nome;
        cin >> pessoas[i].dia;
        cin >> pessoas[i].mes;
        cin >> pessoas[i].ano;

        if (pessoas[i].ano != velho.ano){
            if(velho.ano > pessoas[i].ano){
                velho.ano = pessoas[i].ano;
                velho.nome = pessoas[i].nome;
            }
        } else if ( pessoas[i].mes != velho.mes){
            if(velho.mes > pessoas[i].mes){
                velho.mes = pessoas[i].mes;
                velho.nome = pessoas[i].nome;
            }
        } else if ( pessoas[i].dia != velho.dia){
            if (velho.dia > pessoas[i].dia){
                velho.dia = pessoas[i].dia;
                velho.nome = pessoas[i].nome;
            }
        }
    }
    
   // cout << velho.nome;
}