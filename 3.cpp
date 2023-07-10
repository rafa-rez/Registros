#include <iostream>

using namespace std;


struct cartinha{
    string nome, desejo;

};

struct estoque{

    string brinquedo;
    int quant;
    int pedidos;

};

int main(){

    int tamanhocartas, tamanhobrinqs;

    cin >> tamanhocartas >> tamanhobrinqs;

    cartinha carta[tamanhocartas];
    estoque brinquedos[tamanhobrinqs];
    bool faltabrinquedo = false;

    for(int i =0 ; i < tamanhocartas; i++){

        cin >> carta[i].nome >>carta[i].desejo;

    }

    for (int i = 0; i < tamanhobrinqs; i++){

        cin >> brinquedos[i].brinquedo >> brinquedos[i].quant;

        brinquedos[i].pedidos = 0;
        for(int j = 0; j < tamanhocartas; j ++){

            if(brinquedos[i].brinquedo == carta[i].desejo){
                brinquedos[i].pedidos++;

                if (brinquedos[i].pedidos > brinquedos[i].quant) {
                    faltabrinquedo = true;
            }
        }

    }  
    if (faltabrinquedo) {
        for (int i = 0; i < tamanhobrinqs; i++) {
            if (brinquedos[i].pedidos > brinquedos[i].quant) {
                cout << brinquedos[i].brinquedo <<" ";
            }
        }
    }

    return 0;
}


}