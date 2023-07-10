#include <iostream>

using namespace std;

struct dados{

    string nome, sangue;
    int prio;
};


int main(){

int tamanho;
cin >> tamanho;

dados paciente[tamanho];

for (int i =0; i < tamanho ; i++){

    cin >> paciente[i].nome;
    cin >> paciente[i].sangue;

}
string busca;
cin >> busca;
int A, B, AB, O;
if(busca == "A"){
    A = 2;
    O = 1;
    for (int i = 0; i < tamanho; i++){
        

    }
}
if(busca == "B"){
    B = 2;
    O = 1;
}
if(busca == "AB"){
    AB = 4;
    A = 3;
    B = 2;
    O = 1;
}
if(busca == "O"){
    O = 1;
}


}